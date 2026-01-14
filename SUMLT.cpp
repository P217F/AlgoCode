#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long k;
    cin >> k;
    vector<long long> arr(k+1, 0);

    arr[0] = 0;
    for(int i=1; i<=k; i++) arr[i] = i;
    for(int i=1; i<=k; i++) arr[i] += arr[i-1];

    int cnt = 0;
    for(int i=0; i<k; i++)
        for(int j=1; j<=k; j++)
            if(arr[j] - arr[i] == k) cnt++;

    cout << cnt << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("SUMLT.inp", "r", stdin);
    freopen("SUMLT.out", "w", stdout);

    solve();
    return 0;
}
