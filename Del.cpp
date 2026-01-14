#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("a.inp", "r", stdin);
    freopen("a.out", "w", stdout);

    long long n;
    long int k;
    cin>>n>>k;

    vector<long long> arr(k+1);
    for (int i=1; i<=k; ++i) cin>>arr[i];
    sort(arr.begin()+1, arr.end());

    long long amount = 0;

    for(long long i=1; i<=n; ++i) {
        bool check=true;
        for(int j=1; j<=k; ++j) {
            if (arr[j]>i) break;
            if (i%arr[j] == 0) {
                check=false;
                break;
            }
        }
        if(check) amount++;
    }

    cout<<amount<<endl;
    return 0;
}
