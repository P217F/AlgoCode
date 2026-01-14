#include <bits/stdc++.h>
using namespace std;

void solve() {
    string x,y,res="";
    cin >> x >> y;

    int szx = x.length(), szy = y.length();
    vector<vector<int>> dp(szx+1, vector<int>(szy+1, 0));
    for(int i=1;i<=szx;++i)
        for(int j=1;j<=szy;++j)
            if(x[i-1] == y[j-1])
                dp[i][j] = dp[i-1][j-1] + 1;
            else
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);

    int i = szx, j = szy;
    while(i>0 && j>0) {
        if(x[i-1] == y[j-1]) {
            res += x[i-1];
            i--; j--;
        } else if(dp[i-1][j] > dp[i][j-1]) {
            i--;
        } else {
            j--;
        }
    }

    reverse(res.begin(), res.end());
    cout << res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("XAUCHUNG.INP", "r", stdin);
    freopen("XAUCHUNG.OUT", "w", stdout);

    solve();
    return 0;
}
