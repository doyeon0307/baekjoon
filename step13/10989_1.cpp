#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<int> v;
  int m;
  for (int i = 0; i < n; i++) {
    cin >> m;
    v.emplace_back(m);
  }
  v.shrink_to_fit();

  sort(v.begin(), v.end());
  for (int e : v)
    cout << e << '\n';
}