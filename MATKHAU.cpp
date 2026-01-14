#include <bits/stdc++.h>
using namespace std;

void solve() {
    string passwd;
    cin >> passwd;

    int cnt = 0;
    int n = passwd.length();

    for(int i=0; i<n-8; ++i) {
        for(int j=i+8; j<n; ++j) {
            int upper = 0, lower = 0, num = 0, spechar = 0;
            for(int k=i; k<=j; ++k) {
                if (passwd[k]>='a' && passwd[k]<='z') lower++;
                else if (passwd[k]>='A' && passwd[k]<='Z') upper++;
                else if (passwd[k]>='0' && passwd[k]<='9') num++;
                else spechar++;
            }
            if(upper>=1 && lower>=1 && num>=1 && spechar>=1) cnt++;
        }
    }
    cout << cnt << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("MATKHAU.inp", "r", stdin);
    freopen("MATKHAU.out", "w", stdout);

    solve();
    return 0;
}
