#include <bits/stdc++.h>
using namespace std;

void solve(int m, int n, vector<long int>& boduc, vector<long int>& bocai) {
//    void solve() {
//    int m,n; cin >> m >> n;
//    vector<long int> boduc(m);
//    vector<long int> bocai(n);
//    for(int i=0;i<m;++i) cin >> boduc[i];
//    for(int i=0;i<n;++i) cin >> bocai[i];

    sort(boduc.begin(), boduc.end());
    sort(bocai.begin(), bocai.end());

    int i = 0, j = 0;
    int countpair = 0;

    while (i < m && j < n) {
        if (boduc[i] > bocai[j]) {
            countpair++;
            i++;
            j++;
        } else {
            i++;
        }
    }

    cout << countpair << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("xep_cap_bo.INP", "r", stdin);
    freopen("xep_cap_bo.OUT", "w", stdout);
    mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
    int numtest = 10;
    while (numtest != 0) {
        cout << "Test: " << numtest << "\n";
        int n = uniform_int_distribution<int>(1,10)(rng);
        int m = uniform_int_distribution<int>(1,10)(rng);
        vector<long int> a(m), b(n);
        for(int i=0; i<m; ++i)
            a[i] = uniform_int_distribution<long int>(1,50)(rng);
        for(int i=0; i<n; ++i)
            b[i] = uniform_int_distribution<long int>(1,50)(rng);
        for(int i=0; i<m; ++i)
            cout << a[i] << " ";
        cout << "\n";
        for(int i=0; i<n; ++i)
            cout << b[i] << " ";
        cout << "\n";
        solve(m, n, a, b);
        numtest--;
    }
    return 0;
}
