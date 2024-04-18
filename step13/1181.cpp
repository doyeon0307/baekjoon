#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool sz(string s1, string s2) {
  if (s1.size() < s2.size())
    return true;
  else if (s1.size() == s2.size())
    return (s1.compare(s2) < 0);#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool sz(string s1, string s2) {
  if (s1.size() < s2.size())
    return true;
  else if (s1.size() == s2.size())
    return (s1.compare(s2) < 0);
  else
    return false;
}

int main() {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  
  int n;
  cin >> n;

  string s;
  vector<string> v;
  for (int i = 0; i < n; i++) {
    cin >> s;
    if (find(v.begin(), v.end(), s) == v.end())
      v.push_back(s);
  }

  sort(v.begin(), v.end(), sz);
  //sort(v.begin(), v.end());
  for (auto s : v)
    cout << s << '\n';
}
  else
    return false;
}

int main() {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  
  int n;
  cin >> n;

  string s;
  vector<string> v;
  for (int i = 0; i < n; i++) {
    cin >> s;
    if (find(v.begin(), v.end(), s) == v.end())
      v.push_back(s);
  }

  sort(v.begin(), v.end(), sz);
  //sort(v.begin(), v.end());
  for (auto s : v)
    cout << s << '\n';
}