#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int m=n-1;
    vector<int> arr(m);
    for(int i=0;i<m;++i)
        cin>>arr[i];

    for(int i=1;i<=n;++i) {
        int found=0;
        for(int j=0;j<m;++j) {
            if(arr[j]==i) {
                found=1;
                break;
            }
        }
        if(!found) {
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}
