#include <bits/stdc++.h>
using namespace std;

bool xaudoixung(string str) {
    int n = str.length();
    bool ret = true;
    for(int i=0; i<n/2;++i) {
        if(str[i] != str[n-i-1]) {
            ret = false;
            break;
        }
    }
    return ret;
}

void solve() {
    int n; cin >> n;
    for(int i=0;i<n;++i) {
        string str; cin >> str;
        if(xaudoixung(str))
            cout << "CO" << "\n";
        else
            cout << "KHONG" << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("xau_doi_xung.INP", "r", stdin);
    freopen("xau_doi_xung.OUT", "w", stdout);

    solve();
    return 0;
}
