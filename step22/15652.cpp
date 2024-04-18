#include <iostream>
#include <vector>
using namespace std;

void permutation4 (vector<int> &per, const int n, const int m) {
  if (per.size() == m) {
    for (int p : per)
      cout << p << " ";
    cout << '\n';
  }
  else {
    for (int i = 1; i <= n; i++)
      if (per.empty() || (!per.empty() && per.back() <= i)) {
        per.push_back(i);
        permutation4(per, n, m);
        per.pop_back();
      }
  }
}

int main() {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  
  int n, m;
  cin >> n >> m;

  vector<int> per;
  permutation4(per, n, m);
}