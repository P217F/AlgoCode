#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,S;
    cin>>n>>S;
    vector<long int> arr(n+1);
    for(int i=1;i<=n;++i) {
        cin>>arr[i];
        if (arr[i]>S) {
            cout<<0<<endl;
            return 1;
        }
    }
    int count=1,t=0;
    for(int i=1;i<n;++i) {
        t+=arr[i];
        if(t>S) {
            count++;
            t=arr[i];     
        }
    }
    cout<<count<<endl;
    return 0;
}
