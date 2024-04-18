#include <iostream>
using namespace std;

long long factorial(int n) {
  if (n <= 1)
    return 1;
  else
    return n * factorial(n - 1);
}

int main() {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int N;
  cin >> N;

  cout << factorial(N);
}