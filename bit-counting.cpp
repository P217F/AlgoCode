#include <iostream>
using namespace std;

unsigned int countBits(unsigned long long n) {
    string res="";
    int d=0;
    while (n>0) {
        res.push_back('0'+(n%2));
        n/=2;
    }
    for (auto c : res) {
        if (c=='1') {
            d++;
        }
    }
    return d;
}

int main() {
    int a;
    cin>>a;
    cout<<"Result: "<<countBits(a)<<"\n";
}
