#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int N, M;
  cin >> N >> M;

  set<string> s;
  string input;

  while (N--) {
    cin >> input;
    s.insert(input);
  }

  int cnt = 0;
  while (M--) {
    cin >> input;
    if (s.find(input) != s.end())
      cnt++;
  }
  cout << cnt;
}