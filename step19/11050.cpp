#include <iostream>
using namespace std;

int factorial (int n) {
  int fac = 1;
  if (n != 0)
    for (int i = 2; i <= n; i++)
      fac *= i;
  return fac;
}

int main() {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  
  int n, k;
  cin >> n >> k;

  int com = factorial(n) / (factorial(k) * factorial(n - k));
  cout << com;
}