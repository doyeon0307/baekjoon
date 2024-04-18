#include <iostream>
using namespace std;

int main() {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int n, k;
  cin >> n >> k;

  int circle[n];
  for (int i = 0; i < n; i++)
    circle[i] = i + 1;

  int rst[n];
  int curPos = - 1;
  int cnt;

  for (int i = 0; i < n; i++) {
    cnt = 0;
    while (1) {
      curPos = (curPos + 1) % n;
      if (circle[curPos] != -1)
        cnt++;
      if (cnt == k)
         break;
    }

    rst[i] = circle[curPos];
    circle[curPos] = -1;
  }

  cout << "<";
  for (int i = 0; i < n - 1; i++)
    cout << rst[i] << ", ";
  cout << rst[n - 1] << ">"; 
}