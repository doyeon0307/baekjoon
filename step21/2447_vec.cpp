#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<vector<char>> makeBlank(vector<vector<char>> s, int x, int y, int size) {
  if (size >= 3) {
    //make blak
    int blank = size / 3;
    for (int i = blank; i < blank*2; i++) {
      for (int j = blank; j < blank*2; j++) {
        s[x + i][y + j] = ' ';
      }
    }
    //divide into 9
    if (size >= 9) {
      s = makeBlank(s, x, y, blank);
      s = makeBlank(s, x, y + blank, blank);
      s = makeBlank(s, x, y +blank * 2, blank);
      s = makeBlank(s, x + blank, y, blank);
      s = makeBlank(s, x + blank, y +blank * 2, blank);
      s = makeBlank(s, x + blank * 2, y, blank);
      s = makeBlank(s, x + blank * 2, y + blank, blank);
      s = makeBlank(s, x + blank * 2, y + blank * 2, blank);
    }
    return s;
  }
  else
    return s;
}

int main() {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int n;
  cin >> n;

  //make stars
  vector<vector<char>> star;
  vector<char> line;
  for (int i = 0; i < n; i++)
    line.push_back('*');
  for (int i = 0; i < n; i++)
    star.push_back(line);
  
  //make blanks
  star = makeBlank(star, 0, 0, n);

  //print
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++)
      cout << star[i][j];
    cout << endl;
  }
}