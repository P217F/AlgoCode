#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("a.inp", "r", stdin);
    freopen("a.out", "w", stdout);

    int n,m;
    cin>>n>>m;
    vector<int> arr(n+1), brr(n+1);
    for (int i=1;i<=n;++i) cin>>arr[i];

    int q=0;
    for (int i=1;i<=n;++i) {
        if (arr[i]>=m) q=i;
        brr[i]=brr[i-1]+q;
    }
    cout<<brr[n]<<endl;
    return 0;
}