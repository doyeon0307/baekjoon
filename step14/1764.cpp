#include <iostream>
#include <map>
using namespace std;

int main() {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int n, m;
  string name;
  
  map<string, int> lis;
  map<string, int> lis_see;

  cin >> n >> m;
  
  while (n--) {
    cin >> name;
    lis.insert(make_pair(name, 0));
  }

  while (m--) {
    cin >> name;
    if (lis.find(name) != lis.end())
      lis_see.insert(make_pair(name, 0));
  }

  cout << lis_see.size();
  for (auto p : lis_see)
    cout << '\n' << p.first;
}