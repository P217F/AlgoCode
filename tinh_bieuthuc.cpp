#include <bits/stdc++.h>
using namespace std;

string divideBy2(string &s, int &remainder) {
    string result = "";
    int carry = 0;
    for (char c : s) {
        int num = carry * 10 + (c - '0');
        result.push_back((num / 2) + '0');
        carry = num % 2;
    }
    remainder = carry;
    size_t pos = result.find_first_not_of('0');
    if (pos != string::npos) result = result.substr(pos);
    else result = "0";
    return result;
}

string decimalToBinary(string s) {
    if (s == "0") return "0";
    string binary = "";
    while (s != "0") {
        int rem;
        s = divideBy2(s, rem);
        binary.push_back(rem + '0');
    }
    reverse(binary.begin(), binary.end());
    return binary;
}

string sumofstring(string str1, string str2) {
    while (str1.length() < str2.length()) str1 = '0' + str1;
    while (str2.length() < str1.length()) str2 = '0' + str2;
    int carry = 0;
    string ans = "";
    for (int i = str1.length() - 1; i >= 0; i--) {
        int sum = (str1[i]-'0') + (str2[i]-'0') + carry;
        carry = sum / 10;
        ans.push_back((sum % 10) + '0');
    }
    if (carry) ans.push_back(carry + '0');
    reverse(ans.begin(), ans.end());
    return ans;
}

string dectobin(long int n) {
    string result = "";
    while (n > 0) {
        int bit = n%2;
        result.push_back('0'+bit);
        n/=2;
    }
    reverse(result.begin(), result.end());
    return result;
}

void solve() {
    string num1, num2, expr;
    cin >> num1 >> expr >> num2;
    /*if(num1.length() < 9 && num2.length() < 9) {
        long int n1 = stol(num1), n2 = stol(num2);
        long long res = 0;
        if(expr == "cong") {
            res = n1+n2;
            cout << dectobin(res) << "\n";
        }
        else if(expr == "tru") {
            res = n1-n2;
            cout << dectobin(res) << "\n";
        }
        else if(expr == "chia") {
            res = n1/n2;
            cout << dectobin(res) << "\n";
        }
    } else {
        cout << decimalToBinary(sumofstring(num1, num2));
    }*/
    if(expr == "cong")
        cout << decimalToBinary(sumofstring(num1, num2));
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("tinh_bieuthuc.INP", "r", stdin);
    freopen("tinh_bieuthuc.OUT", "w", stdout);

    solve();
    return 0;
}
