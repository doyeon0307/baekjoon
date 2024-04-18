#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  string str;
  cin >> str;

  set<string> subStr;
  string sub;

  for (int i = 0; i < str.length(); i++) {
    int start = i;
    sub = str[start];
    subStr.insert(sub);

    while (1) {
      if (start >= str.length() - 1)
        break;
      sub += str[start + 1];
      subStr.insert(sub);
      start++;
    }
  }

  cout << subStr.size();
}