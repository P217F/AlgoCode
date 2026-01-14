#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<long long> arr(n+1);
    for(int i=1; i<=n; ++i) cin >> arr[i];

    arr[0] = 0;
    for(int i=1; i<=n; ++i) arr[i] += arr[i-1];

    int cnt = 0;
    for(int i=0; i<=n; ++i)
        for(int j=i; j<=n; ++j)
            if(arr[j]-arr[i] == k) cnt++;
    cout << cnt << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("THINGHIEM.inp", "r", stdin);
    freopen("THINGHIEM.out", "w", stdout);

    solve();
    return 0;
}
