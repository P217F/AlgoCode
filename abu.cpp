#include <bits/stdc++.h>
using namespace std;

int UCLN(long long num1, long long num2) {
    int res = 0;
    if(num1 > num2)
        while(num2 != 0) {
            res = num1%num2;
            num1 = num2;
            num2 = res;
        }
    else
        while(num2 != 0) {
            res = num1%num2;
            num1 = num2;
            num2 = res;
        }
    return num1;
}

void solve() {
    long int x,y;
    long long tux = 0, tuy = 0;
    cin >> x >> y;

    for(int i=1; i<=sqrt(x); i++) if(x%i == 0) tux += i + x/i;
    for(int i=1; i<=sqrt(y); i++) if(y%i == 0) tuy += i + y/i;

    if((int)sqrt(x)*(int)sqrt(x) == x) tux -= sqrt(x);
    if((int)sqrt(y)*(int)sqrt(y) == y) tux -= sqrt(y);

    if(tux/x != tuy/y) {
        cout << -1 << "\n";
        return;
    }
    int ucln = UCLN(tux, x);
    cout << tux/ucln << "\n" << x/ucln;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("abu.inp", "r", stdin);
    freopen("abu.out", "w", stdout);

    solve();
    return 0;
}
