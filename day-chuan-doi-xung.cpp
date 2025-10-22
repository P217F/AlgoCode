#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("a.input", "r", stdin);
    freopen("a.output", "w", stdout);

    int n, state;
    cin>>n;
    vector<int> arr(n+1);
    for(int i=1;i<=n;++i)
        cin>>arr[i];
    int i=1,j=n;
    while(i<j) {
        if(arr[i] == arr[j])
            state=1;
        else {
            state=0;
            break;
        }
        i++;j--;
    }
    cout<<state<<"\n";

    return 0;
}
