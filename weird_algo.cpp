#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin>>n;
    cout<<n<<" ";
    while(n!=1) {
        if(n%2==0) {
            cout<<n/2<<" ";
            n/=2;
        } else {
            cout<<n*3+1<<" ";
            n=n*3+1;
        }
    }
    cout<<endl;
}
