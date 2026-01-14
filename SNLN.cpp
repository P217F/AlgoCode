#include <bits/stdc++.h>
using namespace std;

void solve(string str) {
    // string str; cin >> str;
    int sz = str.length();
    int pos = -1;
    bool swapped = false;
    if(sz == 1) {
        cout << 0 << "\n";
        return ;
    }
    if(sz == 2) {
        if(str[0] > str[1]) {
            swap(str[0], str[1]);
            cout << str << "\n";
            return ;
        } else {
            cout << 0 << "\n";
            return ;
        }
    }
    for(int i=sz-1;  i>1; --i) {
        for(int j=i-1; j>0; --j) {
            if(str[i] < str[j]) {
                swap(str[i], str[j]);
                swapped = true;
                pos = j;
                break;
            }
        }
        if(swapped) break;
    }
    if(swapped) {
        sort(str.begin() + pos + 1, str.end(), greater<char>());
        cout << str << "\n";
    }
    else
        cout << 0 << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("SNLN.INP", "r", stdin);
    freopen("SNLN.OUT", "w", stdout);

    mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

    int numtest = 10;
    for(int i=0;i<numtest;i++) {
        uniform_int_distribution<int> len_dist(1,10);
        int n = len_dist(rng);

        string s;
        uniform_int_distribution<int> first_digit_dist('1', '9');
        s += first_digit_dist(rng);

        uniform_int_distribution<int> char_dist('0', '9');
        for(int j=1; j<n; j++) {
            s += char_dist(rng);
        }
        cout << s << "\n";
        solve(s);
        cout << "\n";
    }

    return 0;
}
