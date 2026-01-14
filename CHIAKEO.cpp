#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<long long> arr(n+1), a1(n+1), a2(n+2);
    for(int i=1; i<=n; ++i) cin >> arr[i];

    sort(arr.begin()+1, arr.end());

    int ida1 = 1, ida2 = 1;
    int i = 1, j = n;
    long long s1 = 0, s2 = 0;

    while(i < j) {
        if(s1+arr[i] > s2+arr[j]) {
            a2[ida2++] = arr[j];
            s2 += arr[j--];
        } else if(s1+arr[i] < s2+arr[j]) {
            a1[ida1++] = arr[i];
            s1 += arr[i++];
        } else {
            a1[ida1++] = arr[i]; a2[ida2++] = arr[j];
            s1 += arr[i++]; s2 += arr[j--];
        }
    }
    if(s1 > s2) {
        for(int i=1; i<ida2; ++i) cout << a2[i] << " ";
        cout << "\n";
        for(int i=1; i<ida1; ++i) cout << a1[i] << " ";
        cout << "\n";
    } else {
        for(int i=1; i<ida1; ++i) cout << a2[i] << " ";
        cout << "\n";
        for(int i=1; i<ida2; ++i) cout << a1[i] << " ";
        cout << "\n";
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("CHIAKEO.INP", "r", stdin);
    freopen("CHIAKEO.OUT", "w", stdout);

    solve();
    return 0;
}
