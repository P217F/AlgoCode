#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("sum.inp", "r", stdin);
    freopen("sum.out", "w", stdout);

    int n;
    long long S;
    cin>>n>>S;
    vector<long long> a(n+1);
    for(int i=1;i<=n;i++) {
        cin>>a[i];
    }

    long long sum=0;
    int l=1;
    int ans=n+1;

    for(int r=1; r<=n; r++) {
        sum += a[r];
        while(sum>=S) {
            ans=min(ans, r-l+1);
            sum -= a[l];
            l++;
        }
    }

    if(ans==n+1) cout<<0;
    else cout<<ans;

    return 0;
}
