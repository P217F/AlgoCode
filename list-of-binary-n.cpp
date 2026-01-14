#include <bits/stdc++.h>
using namespace std;

int arr[1000005],n;

void listofbinn(int i) {
    if(i == n+1) {
        for(int k=1; k<=n; ++k) cout<<arr[k]<<" ";
        cout<<"\n";
        return;
    }
    for(int j=1; j<=n; ++j) {
        arr[i] = j;
        listofbinn(i+1);
    }
}

int main() {
    freopen("a.input", "r", stdin);
    freopen("a.output", "w", stdout);
    cin>>n;
    listofbinn(1);
    return 0;
}
