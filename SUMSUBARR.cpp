#include <bits/stdc++.h>
using namespace std;

void solve(int n, int S, vector<int>& a) {
    /*int n, S;
    cin >> n >> S;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
*/
    vector<int> res;
    bool found = false;

    function<void(int, int, vector<int>&)> dfs = [&](int index, int currentSum, vector<int>& subset) {
        if (currentSum == S) {
            res = subset;
            found = true;
            return;
        }
        if (index == n || currentSum > S || found) return;

        subset.push_back(a[index]);
        dfs(index + 1, currentSum + a[index], subset);
        subset.pop_back();
        dfs(index + 1, currentSum, subset);
    };

    vector<int> subset;
    dfs(0, 0, subset);

    if (found) {
        for (int x : res) cout << x << " ";
        cout << "\n";
    } else {
        cout << "Khong ton tai tap con co tong = " << S << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    //freopen("SUMSUBARR.INP", "r", stdin);
    freopen("SUMSUBARR.OUT", "w", stdout);

    mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
    int test = 30;
    while(test) {
        int n = test;
        int S= uniform_int_distribution<int>(0, 1000)(rng);
        vector<int> arr(n);
        for(int i=0; i<n;++i) {
            arr[i] = uniform_int_distribution<int>(1,1000)(rng);
        }
        solve(n,S,arr);
        test--;
    }
    return 0;
}
