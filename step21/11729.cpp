#include <iostream>
#include <cmath>
using namespace std;

void count (int n) {
  int cnt = pow(2, n) - 1;
  cout << cnt << '\n';
}

void hanoi(int n, int a, int b) {
  if (n == 1) {
    cout << a << " " << b << "\n";
  }
  else if (n >= 2) {
    int c = 6 - (a + b);
    hanoi(n - 1, a, c);
    hanoi(1, a, b);
    hanoi(n - 1, c, b);
  }
}

int main() {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int n;
  cin >> n;

  count(n);
  hanoi(n, 1, 3);
}