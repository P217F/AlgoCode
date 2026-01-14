#include <bits/stdc++.h>
using namespace std;

bool ct1(vector<int>& arr, int kt) {
    int i=1, t=0;
    while (t < kt) {
        t+=arr[i]+1;
        i+=arr[i]+1;
    }
    if(t==kt) return true;
    else return false;
}

int main() {
    freopen("a.input", "r", stdin);
    freopen("a.output", "w", stdout);

    int n;cin>>n;vector<int> arr(n+1);
    for(int i=1; i<=n;++i) cin>>arr[i];

    if(ct1(arr, n) == true) cout<<0<<endl;

    return 0;
}
