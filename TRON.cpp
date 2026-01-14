#include <bits/stdc++.h>
using namespace std;

void solve() {
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);
    vector<char> uppercase, lowercase;
    for(int i=0; i<str1.length(); i++) {
        if(str1[i] >= 'a' && str1[i] <= 'z')
            lowercase.push_back(str1[i]);
        else if (str1[i] >= 'A' && str1[i] <= 'Z')
            uppercase.push_back(str1[i]);
    }
    for(int i=0; i<str2.length(); i++) {
        if(str2[i] >='a' && str2[i] <= 'z')
            lowercase.push_back(str2[i]);
        else if (str2[i] >= 'A' && str2[i] <= 'Z')
            uppercase.push_back(str2[i]);
    }
    sort(uppercase.begin(), uppercase.end(), greater<char>());
    sort(lowercase.begin(), lowercase.end(), greater<char>());
    for(char c : uppercase)
        cout << c;
    for(char c : lowercase)
        cout << c;
    cout << endl;
}

int main() {
    freopen("TRON.INP", "r", stdin);
    freopen("TRON.OUT", "w", stdout);

    solve();
    return 0;
}
