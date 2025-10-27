#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("a.input", "r", stdin);
    freopen("a.output", "w", stdout);

    int n,k;
    long long SUB=0;
    cin>>n>>k;
    vector<int> arr(n+1);
    for (int i=1;i<=n;++i)
        cin>>arr[i];
    int i=1,j=i+k-1;
    while(j<=n) {
        int temp_sub=0;
        for(int d=i;d<=j;++d) {
            temp_sub+=arr[d];
        }
        SUB+=temp_sub;
        ++i;++j;
    }
    cout<<SUB<<endl;
    return 0;
}
