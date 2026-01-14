#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("a.inp", "r", stdin);
    freopen("a.out", "w", stdout);

    long long n,k,s;cin>>n>>k;
    int d = 0;
    vector<long long> arr(n+1);
    arr[0] = 0;
    for(int i=1;i<=n;++i) {
        cin>>s;
        arr[i] = arr[i-1]+s;
    }

    if(n<=1000) {
        for(int i=1;i<n;++i){
            for(int j=i;j<=n;++j) {
                if(arr[j]-arr[i-1] == k) d++;
            }
        }
        cout<<d<<endl;
    } else {
        unordered_map<long long, long long> mp;
        mp[0]=1;
        long long sum = 0;
        for (int i=1;i<=n;++i) {
            sum = arr[i];
            if (mp.find(sum-k) != mp.end()) {
                d += mp[sum-k];
            }
            mp[sum]++;
        }
        cout<<d<<endl;
    }
    return 0;
}
