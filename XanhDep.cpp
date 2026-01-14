#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, len = 0; cin >> n;
    for(int i=0; i<n; i++) {
        string str; cin >> str;
        str += "*";
        int tmplen = 1;
        for(int j=0; j<str.length()-1; j++) {
            if(str[j] == str[j+1]) tmplen++;
            else {
                len = max(len, tmplen);
                tmplen = 1;
            }
        }
        //len = max(len, tmplen);
    }
    cout << len;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("XanhDep.Inp", "r", stdin);
    freopen("XanhDep.Out", "w", stdout);

    solve();
    return 0;
}
