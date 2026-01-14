#include <bits/stdc++.h>
using namespace std;

bool grt(pair<int,int> pt1, pair<int,int> pt2) {
    return pt1.first > pt2.first;
}

int main() {
    freopen("a.input","r",stdin);
    freopen("a.output","w",stdout);
    long int n;cin>>n;
    vector<pair<int,int>> arr(n+1);
    for(int i=1;i<=n;++i) {
        cin>>arr[i].first;
        arr[i].second = i;
    }
    sort(arr.begin()+1,arr.end(),grt);

    set<int> ind1, ind2;
    long long t1 = 0, t2 = 0;
    for(int i=1;i<=n;++i) {
        if(t1 <= t2) {
            t1 += arr[i].first;
            ind1.insert(arr[i].second);
        }
        else {
            t2 += arr[i].first;
            ind2.insert(arr[i].second);
        }
    }
    cout<<t1<<" "<<t2<<endl;
    for(auto i : ind1) cout<<i<<" ";
    cout<<endl;
    for(auto i : ind2) cout<<i<<" ";
    return 0;
}
