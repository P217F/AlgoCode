#include <bits/stdc++.h>
using namespace std;

long long sumofcm(long int n) {
    long long sum = 0;
    for (long int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            sum += i;
            if (i != n / i)
                sum += n / i;
        }
    }
    return sum;
}

void solve() {
    int n; cin >> n;
    for(int i=0; i<n; ++i) {
        long int x; cin >> x;
        cout << ((2*x <= sumofcm(x))? "1" : "0") << "\n";
    }
}

int main( ) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("GHH.INP", "r", stdin);
    freopen("GHH.OUT", "w", stdout);

    solve();
    return 0;
}
