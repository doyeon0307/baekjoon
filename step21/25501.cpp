#include <iostream>
#include <cstring>
using namespace std;

int recursion(const char *s, int l, int r, int c) {
    c++;
    if(l >= r) {cout << 1 << " " << c << '\n'; return 1;}
    else if(s[l] != s[r]) {cout << 0 << " " << c << '\n'; return 0;}
    else return recursion(s, l+1, r-1, c);
}

int isPalindrome(const char *s){
    return recursion(s, 0, strlen(s)-1, 0);
}

int main() {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  
  int t;
  cin >> t;

  string str;
  const char* s;


  while (t--) {
    cin >> str;
    s = str.c_str();
    isPalindrome(s);
  }
}