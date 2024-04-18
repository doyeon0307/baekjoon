#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main() {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  map<string, string> m1;
  map<string, string> m2;

  int n, m;
  cin >> n >> m;

  string num, name;
  for (int i = 0; i < n; i++) {
    num = to_string(i + 1);
    cin >> name;
    m1.insert(make_pair(num, name));
    m2.insert(make_pair(name, num));
  }

  string q;
  while (m--) {
    cin >> q;
    if (m1.find(q) != m1.end())
      cout << m1[q] << '\n';
    else                                                                                                                                                                                                                                                                                                                                                        
      cout << m2[q] << '\n';
  }
}