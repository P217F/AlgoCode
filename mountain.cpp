#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<long long> arr(n);
  for (int i = 0; i < n; ++i)
    cin >> arr[i];

  int length = 0;
  int i = 1;
  while (i < n) {
    while (i < n && arr[i] == arr[i - 1])
      i++;
    int up = 0, down = 0;

    while (i < n && arr[i] > arr[i - 1]) {
      up++;
      i++;
    }
    while (i < n && arr[i] < arr[i - 1]) {
      down++;
      i++;
    }

    if (up > 0 && down > 0)
      length = max(length, up + down + 1);
  }

  cout << length << endl;
  return 0;
}
