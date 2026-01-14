#include <bits/stdc++.h>
using namespace std;

string encrypt_string(string& str, vector<char>& table) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    string res(str.length(), ' ');
    for(int i=0; i<str.length();++i) {
        int index = str[i] - 97;
        index = (index+5)%26;
        res[i] = table[index];
    }
    transform(res.begin(), res.end(), res.begin(), ::toupper);
    return res;
}

string decrypt_string(string str, vector<char>& table) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    string res(str.length(), ' ');
    for(int i=0; i<str.length();++i) {
        int index = str[i] - 97;
        index = (index - 5)%26;
        res[i]  = table[index];
    }
    transform(res.begin(), res.end(), res.begin(), ::toupper);
    return res;
}

void solve() {
    string encryptstr, decryptstr;
    cin >> encryptstr >> decryptstr;
    vector<char> arr(26);
    for(int i=0; i<=25; i++) arr[i] = i+97;

    cout << encrypt_string(encryptstr, arr) << "\n" << decrypt_string(decryptstr, arr) << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("MAHOA.INP", "r", stdin);
    freopen("MAHOA.OUT", "w", stdout);

    solve();
    return 0;
}
