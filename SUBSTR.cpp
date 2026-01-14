#include <bits/stdc++.h>
using namespace std;

void solve() {
    int k; string str;
    cin >> k >> str;
    int ans = 0; long long sum = 0;
    int n = str.length();
    unordered_map<int, long long> arr;
    arr[0] = 1;

    for(int i=0; i<n;++i) {
        if(str[i] == '1') sum++;
        if(sum - k >= 0) {
            ans += arr[sum - k];
        }
        arr[sum]++;
    }
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("SUBSTR.INP", "r", stdin);
    freopen("SUBSTR.OUT", "w", stdout);

    solve();
    return 0;
}
