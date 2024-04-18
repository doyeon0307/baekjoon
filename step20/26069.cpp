#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  set<string> dance;
  dance.insert("ChongChong");

  int n;
  cin >> n;

  string name1, name2;
  
  while (n--) {
    cin >> name1 >> name2;
    if (dance.find(name1) != dance.end() || dance.find(name2) != dance.end()) {
      dance.insert(name1);
      dance.insert(name2);
    }
  }

  cout << dance.size();
}