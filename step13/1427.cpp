#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  string N;
  cin >> N;

  vector<int> v;
  for (int i = 0; i < N.length(); i++) {
    v.push_back(N[i] - 48);
  }

  sort(v.begin(), v.end(), greater<int>());
  for (int e : v)
    cout << e;
}