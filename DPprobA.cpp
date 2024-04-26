#include <iostream>
using namespace std;

int n, kembalian;
int koin[505], memo[505][50005];

int dp(int i, int k) {
  if (k < 0) {
    return 1000005;
  }
  if (k == 0) {
    return 0;
  }
  if (i > n) {
    return 1000005;
  }
  if (memo[i][k] == -1) {
    memo[i][k] = min(min(dp(i, k - koin[i]) + 1, dp(i + 1, k - koin[i]) + 1),
                     dp(i + 1, k));
  }
  return memo[i][k];
}

int main() {
  memset(memo, -1, sizeof(memo));
  cin >> n;

  for (int i = 1; i <= n; i++) {
    cin >> koin[i];
  }
  cin >> kembalian;

  cout << dp(1, kembalian) << "\n";
}
