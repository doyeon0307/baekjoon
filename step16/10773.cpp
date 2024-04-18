#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int k, n;
  cin >> k;

  vector<int> v;

  while (k--) {
    cin >> n;
    if (n == 0)
      v.pop_back();
    else
      v.push_back(n);
  }

  int sum = 0;
  for (int e : v)
    sum += e;

  cout << sum;  
}