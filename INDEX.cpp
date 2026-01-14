#include <bits/stdc++.h>
using namespace std;

struct Candidate {
    int district;
    int sbd;
};

void solve() {
    int n; 
    cin >> n;
    vector<Candidate> candidates(n);
    for (int i = 0; i < n; i++) {
        cin >> candidates[i].district >> candidates[i].sbd;
    }

    unordered_map<int, vector<int>> groups;
    for (auto& c : candidates) {
        groups[c.district].push_back(c.sbd);
    }
    for (auto& [d, vec] : groups) {
        sort(vec.begin(), vec.end());
    }

    using pii = pair<int,int>;
    priority_queue<pii> pq;
    for (auto& [d, vec] : groups) {
        pq.push({(int)vec.size(), d});
    }

    unordered_map<int, int> idx;
    vector<Candidate> result;
    int last_district = -1;

    while (!pq.empty()) {
        pii top1 = pq.top(); pq.pop();
        if (top1.second == last_district) {
            if (pq.empty()) {
                cout << "Khong co cach sap xep hop le\n";
                return;
            }
            pii top2 = pq.top(); pq.pop();

            int d2 = top2.second;
            int i2 = idx[d2]++;
            result.push_back({d2, groups[d2][i2]});
            last_district = d2;

            if (top2.first - 1 > 0) pq.push({top2.first - 1, d2});
            pq.push(top1);
        } else {
            int d1 = top1.second;
            int i1 = idx[d1]++;
            result.push_back({d1, groups[d1][i1]});
            last_district = d1;

            if (top1.first - 1 > 0) pq.push({top1.first - 1, d1});
        }
    }

    for (auto& c : result) {
        cout << c.district << ' ' << c.sbd << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	
	freopen("INDEX.INP", "r", stdin);
	freopen("INDEX.OUT", "w", stdout);

	solve();
	return 0;
}
