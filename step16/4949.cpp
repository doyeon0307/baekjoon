#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  
  while (1) {
    string str; 
    getline(cin, str);
    
    if (str == ".")
      break;

    vector<char> stack;
    bool bal = true;

    for (int i = 0; i < str.length(); i++) {
      if (str[i] == '(' || str[i] == '[')
        stack.push_back(str[i]);
      else if (str[i] == ')') {
        if (!stack.empty() && stack.back() == '(')
          stack.pop_back();
        else {
          bal = false;
          break;
        }
      }
      else if (str[i] == ']') {
        if (!stack.empty() && stack.back() == '[')
          stack.pop_back();
        else {
          bal = false;
          break;
        }
      }
    }

    if (stack.empty() && bal)
      cout << "yes\n";
    else
      cout << "no\n";
  }
}