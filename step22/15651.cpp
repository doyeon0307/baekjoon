#include <iostream>
#include <vector>
using namespace std;

void permutation3 (vector<int> &per, const int n, const int m) {
  if (per.size() == m) {
    for (int p : per)
      cout << p << " ";
    cout << '\n';
  }
  else {
    for (int i = 1;  i <= n; i++) {
      per.push_back(i);
      permutation3(per, n, m);
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
  permutation3(per, n, m);
}