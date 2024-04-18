#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  
  int n;
  cin >> n;
  
  vector<pair<int, int>> v; int x, y;
  while (n--) {
    cin >> x >> y;
    v.push_back(make_pair(y, x));
  }

  sort(v.begin(), v.end());
  for (auto p : v)
    cout << p.second << " " << p.first << '\n';
}