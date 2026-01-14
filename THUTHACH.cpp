#include<bits/stdc++.h>
using namespace std;

void c1() {
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
}

long long gcd(const long long a, const long long b) {
    return b? gcd(b,a%b):a;
}

long long lcm(const long long a, const long long b) {
    return a/gcd(a,b)*b;
}

void c2() {
    freopen("a.inp", "r", stdin);
    freopen("a.out", "w", stdout);

    int T;
    cin>>T;
    while (T--) {
        long long K,a,b;
        cin>>K>>a>>b;

        long long lcm_ab = lcm(a,b);

        auto count_good = [&](const long long n) {
            return n - n/a - n/b + n/lcm_ab;
        };

        long long L = 1, R = K*max(a,b), ans = 0;
        while (L <= R) {
            long long mid = (L+R)/2;
            if (count_good(mid) >= K) {
                ans = mid;
               R = mid - 1;
            } else {
                L = mid + 1;
            }
        }
        cout<<ans<<endl;
    }
}

int main() {
    c2();
    return 0;
}