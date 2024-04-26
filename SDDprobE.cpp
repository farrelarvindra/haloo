#include <functional>
#include <iostream>
#include <queue>
using namespace std;

int main() {
  int n;
  cin >> n;

  priority_queue<int, vector<int>, greater<int>> batu;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    batu.push(x);
  }

  long long ans = 0;
  batu.pop();

  while (batu.size() >= 1) {
    ans += batu.top();
    batu.pop();
  }
  cout << ans << "\n";
}
