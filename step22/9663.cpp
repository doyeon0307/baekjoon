#include <iostream>
#include <vector>
using namespace std;

bool promising (const int *col, const int i, const int j) {
  bool ans = true;
  for (int k = 0; k < i; k++) {
    if (col[k] == j || abs(col[k] - j) == i - k) {
      ans = false;
      break;
    }
  }
  return ans;
}

void queens(int *col, const int n, int i, int &cnt) {
  if (i == n)
    cnt++;
  
  else
    for (int j = 0; j < n; j++)
      if (promising(col, i, j)) {
        col[i] = j;
        queens(col, n, i + 1, cnt);
      }
}

int main() {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  
  int n;
  cin >> n;

  int col[n];
  int cnt = 0;
  queens(col, n, 0, cnt);
  
  cout << cnt;
}