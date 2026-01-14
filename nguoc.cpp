#include <bits/stdc++.h>
using namespace std;

long long reverse_num(long long n) {
    long long result=0;
    while (n!=0) {
        result=result*10+n%10;
        n/=10;
    }
    return result;
}

int main() {
    int n,k;
    cin>>k>>n;

    long long num=k;
    for (int i=0;i<n;++i) {
        cout << reverse_num(num) << ((i<n)? " " : "\n");
        num = num+k;
    }
    return 0;
}
