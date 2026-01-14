#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("a.input", "r", stdin);
    freopen("a.output", "w", stdout);

    int n,d=0;
    cin>>n; vector<long long> A(n+1), B(n+1), C(n+1);
    for(int i=1;i<=n;++i) cin>>A[i];
    B[1]=1;C[n]=0;

    for(int i=1;i<=n;++i)
        if((B[i]+C[i]-1) > d) d=B[i]+C[i]-1;
    cout<<d<<endl;
    return 0;
}
