#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<long int> arr(n+1);

    for(int i = 1; i <= n; ++i) cin >> arr[i];
    sort(arr.begin()+1, arr.end());

    int cnt = 1;
    for(int i = 1; i <= n; ++i) {
        if(arr[cnt] > i) {
            cout << i << endl;
            return;
        }
        cnt++;
    }

    cout << n + 1 << endl;;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("CLB.INP", "r", stdin);
    freopen("CLB.OUT", "w", stdout);
/*
    mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
    int numtest = 10;
    while (numtest--) {
        int n = uniform_int_distribution<int>(1,10)(rng);
        vector<long int> arr(n+1);
        arr[0] = 0;
        for(int i=1; i<=n; ++i) {
            cout << arr[i] << " ";
        solve(n, arr);
    }*/
    solve();
    return 0;
}
