#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> A(n);

    for(int i = 0; i < n; i++) cin >> A[i];

    vector<int> inc(n, 1), dec(n, 1);

    // Tính LIS kết thúc tại i
    for(int i = 0; i < n; i++)
        for(int j = 0; j < i; j++)
            if(A[j] < A[i])
                inc[i] = max(inc[i], inc[j] + 1);

    // Tính LDS bắt đầu tại i
    for(int i = n - 1; i >= 0; i--)
        for(int j = n - 1; j > i; j--)
            if(A[j] < A[i])
                dec[i] = max(dec[i], dec[j] + 1);

    int ans = 0;
    for(int i = 0; i < n; i++)
        ans = max(ans, inc[i] + dec[i] - 1);

    cout << ans << endl;
}

