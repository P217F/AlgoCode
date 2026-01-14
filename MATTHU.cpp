#include  <bits/stdc++.h>
using namespace std;

void mkprefix(const vector<long long>& srcarr, vector<long long>& dstarr, const int size_srcarr) {
    dstarr[0]=0;
    for (int i=1;i<=size_srcarr;++i) {
        dstarr[i]=dstarr[i-1]+srcarr[i];
    }
}

int main() {
    freopen("a.inp", "r", stdin);
    freopen("a.out", "w", stdout);

    int N,M;
    cin>>N>>M;
    vector<long long> arr(N+1);
    vector<long long> t1arr(N+1);
    for (int i=1;i<=N;++i) {
        cin>>arr[i];
    }
    mkprefix(arr,t1arr,N);
    while (M--) {
        int fe; // First element to detect type input
        cin>>fe;
        switch (fe) {
            case 1: {
                int x,y;
                cin>>x>>y;
                cout<<t1arr[y]-t1arr[x-1]<<endl;
                break;
            }
            case 2: {
                int x,y; long long w;
                cin>>x>>y>>w;
                for (int i=x;i<=y;++i) {
                    arr[i] = arr[i]%w;
                }
                mkprefix(arr,t1arr,N);
                break;
            }
            case 3: {
                int x;
                long long k;
                cin>>x>>k;
                arr[x] = k;
                break;
            }
            default:
                break;
        }
    }
    return 0;
}
