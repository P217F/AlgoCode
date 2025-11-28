#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int sql_num_arr(int nums_sql, const vector<long long>& arr, int size) {
    int tmplength=0, length=0;
    for(int i=1; i<=size; ++i) {
        if(arr[i] >= nums_sql) tmplength++;
        else
            if(tmplength >= length) {
                length = tmplength;
                tmplength=0;
            }
        tmplength = 0;
    }
    if(tmplength >= length) length = tmplength;
    return length;
}

int main() {
    freopen("in.inp", "r", stdin);
    freopen("out.out", "w", stdout);

    int n,q;
    cin>>n>>q;
    vector<long long> arr(n+1);
    for(int i=1; i<=n; ++i) cin>>arr[i];

    int count=0;
    while(count < q) {
        int nums; cin>>nums;
        cout<<sql_num_arr(nums, arr, n)<<endl;;
        count++;
    }
    return 0;
}
