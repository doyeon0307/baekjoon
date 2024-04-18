#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int t, a, b, g;
  cin >> t;
  while (t--) {
    cin >> a >> b;
    if (a < b)  g = b;
    else  g = a;
    while (g--) {
      if (a % g == 0 && b % g == 0)
        break;
    }
    cout << g * a * b << '\n';
  }
}