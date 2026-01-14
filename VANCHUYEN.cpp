#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,t;
    cin >> t >> n;
    vector<long int> arr(n+1);
    for(int i=1; i<=n; ++i) cin >> arr[i];

    sort(arr.begin()+1, arr.end(), greater<long int>());

    long long total = 0;
    for(int i=1; i<=n; ++i)
        if(total+arr[i] <= t)
            total += arr[i];

    cout << total << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    freopen("a.inp", "r", stdin);       // Replace by VANCHUYEN.INP
    freopen("a.out", "w", stdout);      // Replace by VANCHUYEN.OUT

    solve();
    return 0;
}
