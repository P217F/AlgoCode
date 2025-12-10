#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<=n; ++i) cin>> arr[i];

    int sum=0;
    int tmpsum=arr[1];

    for(int i=1; i<n; ++i) {
        if(arr[i] <= arr[i+1]) {
            tmpsum += arr[i+1];
        } else {
            if(tmpsum >= sum) sum = tmpsum;
            tmpsum = arr[i+1];
        }
    }

    if(tmpsum >= sum) sum = tmpsum;
    cout<<sum<<endl;

    return 0;
}
