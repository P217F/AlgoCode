#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<long long> arr(n+1);
    for(int i=1; i<=n; ++i) cin >> arr[i];

    sort(arr.begin()+1, arr.end(), greater<long long>());
    long long k = arr[1];
    int height = 1;

    for(int i=2; i<=n; ++i) {
        if(k >= 1) {
            k -= 1;
            k = min(k, arr[i]);
            height++;
        } else break;
    }

    cout << height;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    freopen("a.inp", "r", stdin);
    freopen("a.out", "w", stdout);

    solve();
    return 0;
}
