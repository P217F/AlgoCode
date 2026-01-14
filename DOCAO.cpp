#include <bits/stdc++.h>
using namespace std;

void eratosthenes(int n, vector<bool>& isPrime) {
    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }
}

void solve() {

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("DOCAO.INP", "r", stdin);
    freopen("DOCAO.OUT", "w", stdout);

    solve();
    return 0;
}
