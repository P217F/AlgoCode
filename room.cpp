#include <bits/stdc++.h>
using namespace std;

typedef struct {
    int first;
    int second;
} RoomTime;

bool grt(RoomTime el1, RoomTime el2) {
	if (el1.first < el2.first) return true;
	return false;
}

int main() {
    freopen("a.input", "r", stdin);
    freopen("a.output", "w", stdout);

    int n;cin>>n;
    vector<RoomTime> arr(n+1);
    vector<int> A(n+1);
    for(int i=1;i<=n;++i) cin>>arr[i].first>>arr[i].second;

    sort(arr.begin()+1,arr.end(),grt);

    for(int i=1;i<=n;++i) {
        A[i] = 1;
        for(int j=1;j<i;j++)
            if(arr[j].second <= arr[i].first && A[i] < A[j]+1)
                A[i] = A[j]+1;
    }
    for(int i=1;i<=n;++i) cout<<arr[i].first<<" "<<arr[i].second<<endl;

    for(int i=1;i<=n;++i) cout<<A[i]<<" ";
    cout<<endl;

    return 0;
}
