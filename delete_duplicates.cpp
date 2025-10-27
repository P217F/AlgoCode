#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("a.input", "r", stdin);
    freopen("a.output", "w", stdout);

    int n;
    cin>>n;
    vector<int> arr(n+1);
    for(int i=1;i<=n;++i)
        cin>>arr[i];

    int j=1;
    for (int i=2; i<=n;i++) {
        if (arr[i]!=arr[j]) {
            j++;
            arr[j]=arr[i];
        }
    }

    for(int i=1;i<=j;++i)
        cout<<arr[i]<<" ";
    cout<<endl;
}
