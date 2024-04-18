#include <iostream>
#include <set>
using namespace std;

int main() {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int a, b, n;

  set<int> A;
  set<int> B;

  cin >> a >> b;

  for (int i = 0; i < a; i++) {
    cin >> n;
    A.insert(n);
  }

  for (int i = 0; i < b; i++) {
    cin >> n;
    B.insert(n);
  }

  int cnt = a;
  for (auto iter = B.begin(); iter != B.end(); iter++) {
    if (A.find(*iter) != A.end())
      cnt--;
  }

  cnt += b;
  for (auto iter = A.begin(); iter != A.end(); iter++) {
    if (B.find(*iter) != B.end())
      cnt--;
  }

  cout << cnt;
}