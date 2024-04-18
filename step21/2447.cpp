#include <iostream>
using namespace std;

void makeBlank(char** s, int n) {
  if (n >= 3) {
    int mid = n / 3;
    for (int i = mid; i < mid * 2; i++) {
      for (int j = mid; j < mid  * 2; j++)
        s[i][j] = ' ';
    }
  }
}

int main() {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int n;
  cin >> n;

  //make arr
  char **star;
  star = new char *[n];
  for (int i = 0; i < n; i++)
    star[i] = new char[n];
  
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      star[i][j] = '*';

  makeBlank(star, n);

  //print
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++)
      cout << star[i][i];
    cout << endl;
  }

  //delete
  for (int i = 0; i < n; i++)
    delete star[i];
  delete star;
}