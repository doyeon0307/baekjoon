#include <iostream>
#include <vector>
using namespace std;

void permutation (vector<bool> &used, vector<int> &per, const int n, const int m) {
  if (per.size() == m) {
    for (int p : per)
      cout << p << " ";
    cout << '\n';
  }
  else {
    for (int i = 1; i <= n; i++)
      if (!used[i]) {
        per.push_back(i);
        used[i] = true;
        permutation(used, per, n, m);
        used[per.back()] = false;
        per.pop_back();
      }
  }
}

int main() {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  
  int n, m;
  cin >> n >> m;

  vector<bool> used(n + 1, false);
  vector<int> per;

  permutation(used, per, n, m);
}