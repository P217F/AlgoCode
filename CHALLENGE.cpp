#include<bits/stdc++.h>
using namespace std;

int main() {
    freopen("a.inp", "r", stdin);
    freopen("a.out", "w", stdout);

    int T;
    cin>>T;
    for (int i=1;i<=T;++i) {
        long int K, a, b;
        pair<long long, long long> pr;
        pr.first=1; pr.second=1;
        cin>>K>>a>>b;
        while (true) {
            if (pr.second%a != 0 && pr.second%b != 0) {
                if (pr.first == K) {
                    cout<<pr.second<<endl;
                    break;
                }

                pr.first++;
            }
            pr.second++;
        }
    }

    return 0;
}