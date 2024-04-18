#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  map<string, string, greater<string>> m;
  int n;
  cin >> n;

  string name, rec;
  while (n--) {
    cin >> name >> rec;
    if (m.find(name) == m.end())
      m.insert(make_pair(name, rec));
    else
      if (m[name] == "enter" && rec == "leave")
        m.erase(name);
  }

  for (auto e : m)
    cout << e.first << '\n';
}