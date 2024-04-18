#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int n, m;
  cin >> n;

  pair<bool, int> arr[n];
  vector<int> copy;
  for (int i = 0; i < n; i++) {
    cin >> m;
    arr[i] = make_pair(false, m);
    copy.push_back(m);
  }

  sort(copy.begin(), copy.end());
  copy.erase(unique(copy.begin(), copy.end()), copy.end());

  int cnt;
  for (int i = 0; i < n; i++) {
    if (!arr[i].first) {
      cnt = 0;
      for (int j = 0; j < n; j++) {
        if (copy[j] < arr[i].second)
          cnt++;
        else break;
      }
      arr[i].second = cnt;
      for (int k = i; k < n; k++)
        if (arr[i].second == arr[k].second) {
          arr[k].first = true;
          arr[k].second = cnt;
        }
    }
  }

  for (auto p : arr)
    cout << p.second << " ";
}