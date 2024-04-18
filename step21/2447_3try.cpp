#include <iostream>
#include <vector>
using namespace std;

void printStar(int x, int y, int size) {
  if ((x / size) % 3 == 1 && (y / size) % 3 == 1)
    cout << ' ';
  else {
    if (size == 1)
      cout << '*';
    else
      printStar(x, y, size / 3);
  }
}

int main() {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++)
      printStar(i, j, n);
    cout << '\n';
  }
}