#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long a, b, result = 0;
    cin >> a >> b;

    for(int i=1; i<=sqrt(a); i++) {
        if(a%i == 0) {
            if(b%(3*i) == 0)
                result += i;
            if(b%(3*a/i) == 0 && a/i != i)
                result += a/i;
        }
    }
    cout << result;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("TongUoc.Inp", "r", stdin);
    freopen("TongUoc.Out", "w", stdout);

    solve();
    return 0;
}
