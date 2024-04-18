#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main() {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int N, n, M, m;
  cin >> N;
  map<int, int> mp;
  while (N--) {
    cin >> n;
    if (mp.find(n) == mp.end())
      mp.insert(make_pair(n, 1));
    else
      mp[n]++;
  }

  cin >> M;
  while (M--) {
    cin >> m;
    if (mp.find(m) == mp.end())
      cout << 0 << " ";
    else
      cout << mp[m] << " ";
  }
}