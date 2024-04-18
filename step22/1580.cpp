#include <iostream>
#include <vector>
using namespace std;

int board[9][9];

bool sdoku (int i, int j) {
  bool find = false;
  int row = 0;
  int col = 0;
  int rcnt = 0;
  int ccnt = 0;

  for (int k = 0; k < 9; k++) {
    row += board[i][k];
    col += board[k][j];
    if (board[i][k] == 0) rcnt++;
    if (board[k][j] == 0) ccnt++;
  }
  if (rcnt == 1) {
    //cout<<"by row.. ";
    board[i][j] = 45 - row;
    //cout <<"row is "<<row<<" and "<< i << ", "<<j<<" -> "<<board[i][j]<<'\n';
    find = true;
  }
  else if (ccnt == 1) {
    //cout<<"by collumn..";
    board[i][j] = 45 - col;
    //cout <<"col is "<<col<<" and "<<  i << ", "<<j<<" -> "<<board[i][j]<<'\n';
    find = true;
  }

  else {
    int r = i / 3;
    int c = j / 3;
    int s = 0;
    int scnt = 0;
    for (int k = 3*r; k < 3*r + 3; k++)
      for (int l = 3*c; l < 3*c + 3; l++) {
        s += board[k][l];
        if (board[k][l] == 0) scnt++;
      }
    if (scnt == 1) {
      //cout<<"by square..";
      board[i][j] = 45 - s;
      //cout <<"s is "<<s<<" and "<<  i << ", "<<j<<" -> "<<board[i][j]<<'\n';
      find = true;
    }
  }
  return find;
}

void runSdoku (vector<pair<int, int>> v) {
  if (!v.empty()) {
  vector<pair<int, int>> stillZero;
  for (auto p : v) {
    if (!sdoku(p.first, p.second))
      stillZero.push_back(p);
    }
  //cout<<stillZero.size()<<" is left.\n";
  //for (auto p : stillZero)
  //  cout << '\t'<<p.first<<", "<<p.second<<'\n';
  runSdoku(stillZero);
  }
}

int main() {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  vector<pair<int, int>> zero;

  for (int i = 0; i < 9; i++)
    for (int j = 0; j < 9; j++) {
      cin >> board[i][j];
      if (board[i][j] == 0)
        zero.push_back(make_pair(i, j));
    }

  for (auto p : zero)
    sdoku(p.first, p.second);

  //print
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++)
      cout << board[i][j] << " ";
    cout << '\n';
  }
}