#include <bits/stdc++.h>
using namespace std;

bool sumofdigit(long long n) {
	long long tmp = n, sum = 0;
	int cntdigit = 0;
	while(tmp != 0) {
		sum += tmp%10;
		cntdigit++;
		tmp /= 10;
	}
	if(sum%cntdigit != 0) return false;
	return true;
}

void solve() {
	int k; cin >> k;
	long long n = 1, res = 0, count = 0;

	while(count != k) {
		if(sumofdigit(n)) {
			count++;
			res = n;
		}
		n++;
	}
	cout << res;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	freopen("DIVN.INP", "r", stdin);
	freopen("DIVN.OUT", "w", stdout);

	solve();
	return 0;
}
