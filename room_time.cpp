#include <bits/stdc++.h>
using namespace std;

typedef struct {
    int first;
    int second;
} RoomTime;

bool grt(RoomTime el1, RoomTime el2) {
	if (el1.second < el2.second) return true;
	return false;
}

int main() {
    freopen("a.input", "r", stdin);
    freopen("a.output", "w", stdout);

    int n;cin>>n;
    vector<RoomTime> arr(n+1);
    vector<int> index(n+1);
    for(int i=1;i<=n;++i) cin>>arr[i].first>>arr[i].second;

    sort(arr.begin()+1,arr.end(),grt);

    int a = arr[1].first, count = 0, ind = 0;

    for(int i=1;i<=n;++i)
        if(a <= arr[i].first) {
            count++;
            a = arr[i].second;
            index[ind++] = i;
        }

    cout<<count<<endl;
    for(int i=0; i<ind;++i)
        cout<<arr[index[i]].first<<" "<<arr[index[i]].second<<endl;

    return 0;
}
