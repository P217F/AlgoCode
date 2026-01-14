#include <bits/stdc++.h>
using namespace std;

vector<int> arr(1000005), brr(1000005);
int n, t=0, m;

void dmoney(int i) {
    if(t == m) {
        for(int k=1; k<i; ++k) {
            cout<<brr[k]<<" ";
            return;
        }
    }
    for(int j=1; j<=n; ++j) {
        if(t+arr[j] <= m) {
            t = t+arr[j];
            brr[i] = j;
            dmoney(i+1);
        }
    }
}

int main() {
    freopen("a.input", "r", stdin);
    freopen("a.output", "w", stdout);
    cin>>m>>n;
    for(int i=1; i<=n; ++i) cin>>arr[i];
    dmoney(1);
    return 0;
}
