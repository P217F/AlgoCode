#include <bits/stdc++.h>
using namespace std;

int getmaxlength(vector<long long>& arr, int x, int n) {
    int length = 0, rlength = 0;
    for(int i=1; i<=n; ++i) {
        if(arr[i] <= x) {
            length++;
        } else {
            if(length > rlength)
                rlength = length;
            length = 0;
        }
    }
    if(length > rlength)
        rlength = length;
    return rlength;
}

void solve() {
    int n,q;
    cin>>n>>q;
    vector<long long> arr(n+1);
    for(int i=1; i<=n; ++i) cin >> arr[i];

    while(q > 0) {
        int x;
        cin >> x;
        cout << getmaxlength(arr, x, n) << endl;
        q--;
    }
}

int main() {
    ios::synac_with_stdio(0);
    cin.tie(nullptr);

    freopen("a.inp", "r", stdin);       // Replace by DAY_CON.INP
    freopen("a.out", "w", stdout);      // Replace by DAY_CON.OUT

    solve();
    return 0;
}
