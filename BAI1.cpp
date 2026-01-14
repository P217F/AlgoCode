#include <bits/stdc++.h>
using namespace std;

typedef struct {
    int lower;
    int upper;
    int number;
} Case;

void prob1(string str) {
    unordered_set<char> number, upper, lower;
    for (int i=0;i<str.size();++i) {
        if (str[i]>='a' && str[i]<='z') {
            lower.insert(str[i]);
        }
        if (str[i]>='A' && str[i]<='Z') {
            upper.insert(str[i]);
        }
        if (str[i]>='0' && str[i]<='9') {
            number.insert(str[i]);
        }
    }
    cout << upper.size() << " " << lower.size() << " " << number.size() << endl;
}

void prob2(vector<Case> arr, string str, int n) {
    int cs=0, ddai=n;
    for (int i=1;i<=n-5;++i) {
        for (int j=i+5;j<=n;++j) {
            if ((arr[j].lower-arr[i-1].lower >= 1) && (arr[j].upper-arr[i-1].upper >= 1) && (arr[j].number-arr[i-1].number >= 1) && (j-i+1 < ddai)) {
                ddai = j-i+1;
                cs = i;
            }
        }
    }
    for (int i=cs-1;i<cs+ddai-1;++i) cout<<str[i];
    cout<<endl;
}

void prob3(vector<Case> arr, string str, int n) {
    int cs=0, ddai=n;
    for (int i=1;i<=n-5;++i) {
        for (int j=i+5;j<=n;++j) {
            if ((arr[j].lower-arr[i-1].lower >= 2) && (arr[j].upper-arr[i-1].upper >= 2) && (arr[j].number-arr[i-1].number >= 2) && (j-i+1 < ddai)) {
                ddai = j-i+1;
                cs = i;
            }
        }
    }
    for (int i=cs-1;i<cs+ddai-1;++i) cout<<str[i];
    cout<<endl;
}

int main() {
    freopen("a.inp", "r", stdin);
    freopen("a.out", "w", stdout);

    string str;
    cin>>str;

    prob1(str);

    int n = str.size();
    vector<Case> arr(n+1);
    arr[0].lower=0; arr[0].upper=0;arr[0].number=0;
    for(int i=0;i<n;++i) {
        if (str[i]>='a' && str[i]<='z') {
            arr[i+1].lower = arr[i].lower + 1;
            arr[i+1].upper = arr[i].upper;
            arr[i+1].number = arr[i].number;
        }
        if (str[i]>='A' && str[i]<='Z') {
            arr[i+1].upper = arr[i].upper+1;
            arr[i+1].lower = arr[i].lower;
            arr[i+1].number = arr[i].number;
        }
        if (str[i]>='0' && str[i]<='9') {
            arr[i+1].number=arr[i].number+1;
            arr[i+1].upper=arr[i].upper;
            arr[i+1].lower=arr[i].lower;
        }
    }
    prob2(arr, str, n);
    prob3(arr, str, n);
    return 0;
}
