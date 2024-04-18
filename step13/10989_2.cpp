#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int arr[10000];
  for (int i = 0; i < 10000; i++)
    arr[i] = 0;
      
  int n, m;
  cin >> n;
  
  while (n--) {
    cin >> m;
    arr[m - 1]++;
  }

  for (int i = 0; i < 10000; i++) {
    while (arr[i]--)
      cout << i + 1 << '\n';
  }
}