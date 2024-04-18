#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int n;
  int cnt = 0;

  string name;
  set<string> enter;

  cin >> n;
  while (n--) {
    cin >> name;
    if (name == "ENTER")
      enter.clear();
    else
      if (enter.find(name) == enter.end()) {
        cnt++;
        enter.insert(name);
      }
  }

  cout << cnt;
}