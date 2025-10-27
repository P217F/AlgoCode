#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("a.input", "r", stdin);
    freopen("a.output", "w", stdout);

    int n,mkk=0;
    cin>>n;
    vector<int> arr(n+1), m(n+1);
    for(int i=1;i<=n;++i)
        cin>>arr[i];

    for(int i=1;i<=n;++i) {
        if (arr[i]!=0) {
            mkk++;m[mkk]=arr[i];
        }
    }

    for(int i=mkk+1;i<=n;++i)
        m[mkk]=0;

    for(int i=1;i<=n;++i)
        cout<<m[i]<<" ";
    cout<<"\n";

    return 0;
}
