#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("a.input", "r", stdin);
    freopen("a.output", "w", stdout);

    int n, l=1, r=n, MAX_l=0, MAX_r=0, T=0;
    cin>>n;
    vector<int> A(n+1);
    for (int i=1;i<=n;++i)
        cin>>A[i];

    while (l<r) {
        if (A[l]<A[r]) {
            if (A[l]>=MAX_l) MAX_l=A[l];
            else T+=MAX_l-A[l];
            l++;
        } else {
            if (A[r]>=MAX_r) MAX_r=A[r];
            else T+=MAX_r-A[r];
            r--;
        }
    }

    cout<<T<<endl;
    return 0;
}
