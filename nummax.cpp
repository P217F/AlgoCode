#include <bits/stdc++.h>
using namespace std;

int splitnumtoarr(vector<int>& arr, long long num) {
    int i=0;
    while(num != 0) {
        int split=num%10;
        arr[i]=split;
        num/=10;
        ++i;
    }
    return i;
}

void getMaxnumandmark(vector<int> arr, vector<int>& brr, int start, int ends, int amount) {
    int am=0;
    while(am<amount) {
        int q=0, index=0;
        for(int i=start;i<=ends;++i) {
            if(arr[i]>q) {
                q=arr[i];
                index=i;
            }
        }
        brr[index]=1;
        am++;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("nummax.inp", "r", stdin);
    freopen("nummax.out", "w", stdout);

    long long n,p;
    cin>>n>>p;
    vector<int> arr(50);
    vector<int> brr(50, 0);
    int len=splitnumtoarr(arr, n);

    for(int i=0;i<len/2;++i) {
        swap(arr[i],arr[len-i-1]);
    }

    int index;
    for(int i=0;i<len;++i) {
        if(arr[i] == p) {
            index=i;
            brr[i]=1;
            break;
        }
    }

    getMaxnumandmark(arr,brr,0,index-1,p-1);
    getMaxnumandmark(arr,brr,index+1,len-1,p-1);

    for(int i=0;i<len;++i) {
        if(brr[i]==1) cout<<arr[i];
    }
    cout<<endl;

    return 0;
}
