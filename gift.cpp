#include <bits/stdc++.h>
using namespace std;

long long c1() {
    freopen("a.inp", "r", stdin);
    freopen("a.out", "w", stdout);

    long int n,m;
    cin>>n>>m;
    vector<long long> arr(n+1), brr(m+1);
    for (int i=1;i<=n;++i) cin>>arr[i];
    for (int i=1;i<=m;++i) cin>>brr[i];

    sort(arr.begin()+1, arr.end());
    sort(brr.begin()+1, brr.end());

    int ind = 1;
    long long ans = 0;
    for (int i=1;i<=m;++i) {
        vector<int>::iterator found = lower_bound(arr.begin()+ind,arr.end(),brr[i]);
        if (found == arr.end()) {
            return -1;
        }
        ans += arr[found-arr.begin()];
        ind = found-arr.begin()+1;
    }

    return ans;
}

long long c2() {
    freopen("a.inp", "r", stdin);
    freopen("a.out", "w", stdout);

    int n, m;
    cin>>n>>m;
    vector<long long> arr(n), brr(m);
    for (int i=1;i<=n;i++) cin>>arr[i];
    for (int i=1;i<=m;i++) cin>>brr[i];

    sort(arr.begin(), arr.end());
    sort(brr.begin(), brr.end());

    long long ans=0;
    int idx=1;
    for (int i=1;i<=m;i++) {
        while (idx<=n && arr[idx]<brr[i]) idx++;
        if (idx > n) {
            return -1;
        }
        ans += arr[idx];
        idx++;
    }

    return ans;
}

int main() {
    cout<<c1()<<endl;
    return 0;
}