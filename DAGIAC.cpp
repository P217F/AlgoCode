#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<pair<int,int>> arr(n+1);
    for(int i=0; i<n; ++i) cin >> arr[i].first >> arr[i].second;

    int s = 0;
    auto sign = [](int x) -> int {
        if(x>0) return 1;
        else if(x<0) return -1;
        else return 0;
    };
    for(int i=0; i<n; ++i) {
        int j = (i+1) % n;
        int k = (i+2) % n;

        int c = (arr[j].first-arr[i].first)*(arr[k].second-arr[j].second) - (arr[j].second-arr[i].second)*(arr[k].first-arr[j].first);
        if(c != 0) {
            if(s == 0)
                s = sign(c);
            else if(sign(c) != s) {
                cout << "DA GIAC KHONG LOI\n";
                return;
            }
        }
    }
    cout << "DA GIAC LOI\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    freopen("a.inp", "r", stdin);
    freopen("a.out", "w", stdout);

    solve();
    return 0;
}
