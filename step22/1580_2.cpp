#include <iostream>
#include <vector>
using namespace std;
int board[9][9];
vector<pair<int, int>> zero;

bool row (int n, int x, int y) {
  bool rst = true;
  for (int i = 0; i < 9; i++)
    if (n == board[x][i]) {
      rst = false;
      break;
    }
  return rst;
}

bool col (int n, int x, int y) {
  bool rst = true;
  for (int i = 0; i < 9; i++)
    if (n == board[i][y]) {
      rst = false;
      break;
    }
  return rst;
}

bool sqr (int n, int x, int y) {
  bool rst = true;
  x /= 3;
  y /= 3;
  for (int i = x; i < x + 3; x++)
    for (int j = y; j < y + 3; y++)
      if (n == board[i][j]) {
        rst = false;
        break;
      }
  return rst;
}

void sdoku() {
  if (!zero.empty()) {
    pair<int, int> coor = zero.back();
    zero.pop_back();
    sdoku();

    int x = coor.first;
    int y = coor.second;
    int f = -1;
    cout<<"---------"<<"x="<<x<<", y="<<y<<"--------\n";

    for (int i = 1; i <= 9; i++) {
      if (!row(i, x, y)) {
        continue;
      }
      else if (!col(i, x, y)) {
        continue;
      }
      else if (!sqr(i, x, y)) {
        continue;
      }
      else {
        f = i;
        break;
      }
    }

    if (f > 0) {
      board[x][y] = f;
    }
    //else {
    //  zero.push_back(coor);
    //}
  }
}

int main() {
  for (int i = 0; i < 9; i++)
    for (int j = 0; j < 9; j++) {
      cin >> board[i][j];
      if (board[i][j] == 0)
        zero.push_back(make_pair(i, j));
    }
  sdoku();
  cout<<"\n[after]\n";
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++)
      cout << board[i][j] << " ";
    cout << '\n';
  }
}