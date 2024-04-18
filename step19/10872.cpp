#include <iostream>
using namespace std;

int main() {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int n;
  cin >> n;

  int fac = 1;
  if (n != 0)
    for (int i = 1; i <= n; i++)
      fac *= i;
  
  cout << fac;
}