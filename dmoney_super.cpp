#include <bits/stdc++.h>
using namespace std;

vector<int> a, b, c;
int m, n;

int best = 1e9;

void Try(int sum, int cnt) {
    if(sum == m) {
        if(cnt < best) {
            best=cnt;b=c;
        }
        return;
    }
    if(sum > m || cnt >= best) return;
    for(int i=0; i<n; i++) {
        c.push_back(a[i]);
        Try(sum+a[i], cnt+1);
        c.pop_back();
    }
}

int main() {
    freopen("a.input", "r", stdin);
    freopen("a.output", "w", stdout);
    cin>>m>>n;
    a.resize(n);
    for(int i=0; i<n; i++) cin>>a[i];
    sort(a.begin(), a.end(), greater<int>());
    Try(0, 0);
    for(int x : b) cout<<x<<" ";
    return 0;
}
