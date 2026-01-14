#include  <bits/stdc++.h>
using namespace std;

int main() {
    freopen("a.inp", "r", stdin);
    freopen("a.out", "w", stdout);

    string arrstr, res;
    getline(cin, arrstr);

    int d=0;
    for (auto i=arrstr.rbegin();i!=arrstr.rend();++i) {
        if (isdigit(static_cast<unsigned char>(*i))) {
            res.push_back(static_cast<unsigned char>(*i));
            d++;
        }
        if (d == 5) break;
    }

    const int n=res.size();
    for (int i=0;i<n/2;++i) {
        swap(res[i], res[n-i-1]);
    }

    cout<<res<<endl;
    return 0;
}