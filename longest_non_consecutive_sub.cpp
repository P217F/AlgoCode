#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("a.input", "r", stdin);
    freopen("a.output", "w", stdout);

    int n;
    cin>>n;
    vector<int> A(n+1),B(n+1),C(n+1);
    for(int i=1;i<=n;++i)
        cin>>A[i];

    B[1]=1;C[1]=0;
    for(int i=2;i<=n;++i) {
        B[i]=1;C[i]=0;
        for(int j=1;j<i;++j)
            if(B[i]<=B[j] && A[i]>A[j]) {
                B[i]=B[j]+1;
                C[i]=j;
            }
    }

    int csmax=1;
    for(int i=1;i<=n;++i)
        if(B[i]>B[csmax])
            csmax=i;

    set<int> D;
    while(csmax!=0) {
        D.insert(A[csmax]);
        csmax=C[csmax];
    }
    for(int i : D)
        cout<<i<<" ";

    return 0;
}
