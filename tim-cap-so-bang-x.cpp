#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("a.input", "r", stdin);
    freopen("a.output", "w", stdout);

    int d=0,n,i=1,j,x,sl=1,p=0;
    cin>>n>>x;
    int a[n+1], b[n+1], ts[n+1];
    for(int i=1;i<=n;++i)
        cin>>a[i];
    sort(a+1,a+n+1);
    a[n+1] = a[n]+1;

    for(int i=1;i<=n;++i) {
        if(a[i] == a[i+1]) sl++;
        else {
            p++;b[p]=a[i];ts[p]=sl;sl=1;
        }
    }
    j=p;
    while (i<j) {
        if(b[i]+b[j] == x) {d=d+ts[i]*ts[j];i++;j--;}
        else {
            if (b[i]+b[j] > x) j--;
            else i++;
        }
    }
    cout<<d<<"\n";
    return 0;
}
