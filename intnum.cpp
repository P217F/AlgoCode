#include <bits/stdc++.h>
using namespace std;

void h1() {
    const int maxloop = 1e6;
    long long n;
    cin >> n;
    for(int i=1; i<=maxloop; ++i) {
        if((long long)pow(i, i)%n == 0) {
            cout << i << "\n";
            break;
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    freopen("a.inp", "r", stdin);
    freopen("a.out", "w", stdout);

    h1();
    return 0;
}
