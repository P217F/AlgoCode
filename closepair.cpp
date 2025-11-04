#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    vector<long long> arr(n+1);
    for(int i=1;i<=n;++i)
        cin>>arr[i];

    sort(arr.begin()+1, arr.end());
    long long t=INT64_MAX;
    for(int i=2;i<=n;++i) {
        if(abs(arr[i]-arr[i-1])<=t) {
            t=abs(arr[i]-arr[i-1]);
        }
    }
    cout<<t<<endl;
    return 0;
}
