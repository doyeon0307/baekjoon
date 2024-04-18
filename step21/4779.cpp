#include <iostream>
#include <cstring>
using namespace std;

string makeLine(string N) {
  int n = stoi(N);
  string line = "-";
  if (n > 0)
    for (int i = 0; i < n; i++)
      line = line + line + line;
  return line;
}

string cantorian(string str) {
  if (str.length() >= 3) {
    //divide
    int lgth = str.length() / 3;
    string str1 = str.substr(0, lgth);

    string str2 = " ";
    for (int i = 1; i < lgth; i++)
      str2 += " ";

    string str3 = str.substr(lgth*2, lgth);

    //recursion
    str1 = cantorian(str1);
    str3 = cantorian(str3);
    return str1 + str2 + str3;
  }
  else
    return str;
}

int main() {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  string N, line;
  while (getline(cin, N)) {
    if (N == "")  break;

    line = cantorian(makeLine(N));
    cout << line << '\n';
  }
}