#include <iostream>
using namespace std;


long long factorial (int n) {
  long long fac = 1;
  for (int i = 1; i <= n; i++)
    fac *= i;
  return fac;
}

long long combination (int n, int k) {
  long long com = 1;
  if (k > n / 2) {
    for (int i = n; i > k; i--)
      com *= i;
    com /= factorial(n - k);
  }
  else {
    for (int i = n; i > n - k; i--)
      com *= i;
    com /= factorial(k);
  }
  return com;
}

int main() {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  
  int t, n, m;
  cin >> t;

  while (t--) {
    cin >> n >> m;
    if (n == m) cout << 1 << '\n';
    else  cout << combination(m, n) << '\n';
  }
}