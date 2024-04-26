#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int h[100005];
  long long val[100005];
  long long ans = 0;
  for (int i = 0; i < n; i++) {
    cin >> h[i];

    val[i] = 1;
    int j = i - 1;

    while (j >= 0) {
      if (h[i] >= h[j]) {
        val[i] += val[j];
      }
      j -= val[j];
    }
    ans += val[i];
  }
  cout << ans << "\n";
}
