#include <iostream>
using namespace std;

int main() {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  
  int c, n, N;
  cin >> c;

  if (c == 1) {
    cin >> n;
    N = n * n;
  }
  else {
    
    cin >> n;
    int min = n;
    int max = n;

    while (--c) {
      cin >> n;
      if (n < min)  min = n;
      if (n > max)  max = n;
    }
    N = min * max;
  }
  cout << N;
}