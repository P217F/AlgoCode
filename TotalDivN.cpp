#include <bits/stdc++.h>
using namespace std;

void solve() {
    int M, N;
    cin >> M >> N;

    vector<long long> dp(N, 0);
    dp[0] = 1;

    for (int i = 0; i < M; i++) {
        long long x;
        cin >> x;
        x %= N;

        vector<long long> new_dp = dp;
        for (int r=0; r<N; r++) {
            new_dp[(r + x) % N] += dp[r];
        }
        dp = new_dp;
    }

    cout << dp[0] - 1;
    return;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("TotalDivN.inp", "r", stdin);
    freopen("TotalDivN.out", "w", stdout);

    solve();
    return 0;
}
