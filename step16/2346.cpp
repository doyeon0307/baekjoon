#include <iostream>
#include <deque>
using namespace std;

int main() {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int N, n;
  cin >> N;

  int arr[N];
  int num[N];
  for (int i = 0; i < N; i++) {
    arr[i] = 1;
    cin >> n;
    num[i] = n;
  }

  int pos = 0;
  int cnt, number;

  cout << 1 << " ";
  arr[0] = 0;

  for (int i = 1; i < N; i++) {
    number = num[pos];
    cnt = 0;
    if (number < 0)
      while (cnt < abs(number)) {
        pos--;
        if (pos < 0)  pos += N;
        if (arr[pos]) cnt++;
      }
    else
      while (cnt < number) {
        pos++;
        if (pos >= N)  pos -= N;
        if (arr[pos]) cnt++;
      }
    
    cout << pos + 1 << " ";
    arr[pos] = 0;
  }
}