#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("a.input","r",stdin);
    freopen("a.output","w",stdout);

    int n, length=0, current_length=0, src_index=0, temp_index=0, dest_index=0, src_state=0;
    cin>>n;
    vector<int> arr(n+1);
    for(int i=1;i<=n;++i) cin>>arr[i];

    for(int i=1;i<=n;++i) {
        if(arr[i]%2 == 0) {
            length++;
            if(src_state == 0) {
                src_state=1;
                temp_index=i;
            }
        } else {
            if(length > current_length) {
                src_index=temp_index;
                dest_index=i-1;
                current_length=length;
            }
            length=0;
            src_state=0;
            temp_index=0;
        }
    }
    for (int i=src_index;i<=dest_index;++i)
        cout<<arr[i]<<" ";
    cout<<"\n";

    return 0;
}
