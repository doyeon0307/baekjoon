#include <iostream>
#include <vector>
using namespace std;

int main() {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int t;
  cin >> t;

  string str;

  while (t--) {
    vector<char> v;
    cin >> str;
    for (int i = 0; i < str.length(); i++) {
      if (str[i] == '(')
        v.push_back('(');
      else {
        if (!v.empty() && v.back() == '(')
          v.pop_back();
        else
          v.push_back(')');
        }
    }

    if (v.empty())
      cout << "YES\n";
    else
      cout << "NO\n";
  }
}