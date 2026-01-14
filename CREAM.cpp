#include <bits/stdc++.h>
using namespace std;

bool check(int i, int j, int k, const vector<vector<bool>>& a) {
    return a[i][j] && a[j][k] && a[i][k];
}

void solve() {
	int n,m;
	cin >> n >> m;
	vector<vector<bool>> matrix(n, vector<bool>(n, true));

	for(int i=1; i<=n; ++i) {
		int a,b;
		cin >> a >> b;
		matrix[a][b] = false;
		matrix[b][a] = false;
	}
	
	int count = 0;
	for(int i=1; i<=n-2; ++i)
		for(int j=i+1; j<=n-1; ++j)
			for(int k=j+1; k<=n; ++k)
				if(check(i,j,k,matrix))
					count++;

	cout << count;
}

int main() {
	freopen("CREAM.INP", "r", stdin);
	freopen("CREAM.OUT", "w", stdout);

	solve();
	return 0;
}
