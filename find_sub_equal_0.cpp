#include <bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int>& arr, int n) {
    int j=1;
    for (int i=2; i<=n;i++) {
        if (arr[i]!=arr[j]) {
            j++;
            arr[j]=arr[i];
        }
    }
    return j;
}

int main() {
    freopen("a.input", "r", stdin);
    freopen("a.output", "w", stdout);

    int n,imb=0;
    cin>>n;
    vector<int> A(n+1);
    for (int i=1;i<=n;++i)
        cin>>A[i];
    sort(A.begin()+1,A.begin()+n+1);
    int m=removeDuplicates(A,n);
    for (int i=1;i<=m-2;++i) {
        int l=i+1;
        int r=m;
        while (l<r) {
            int sub = A[i]+A[l]+A[r];
            if (sub==0) {
                cout<<A[i]<<" "<<A[l]<<" "<<A[r]<<"\n";
                l++;r--;
            } else {
                if (sub<0) l++;
                else r--;
            }
        }
    }
    return 0;
}
