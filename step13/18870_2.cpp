#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int n, m;
  cin >> n;

  int arr[n];
  vector<int> srt;

  for (int i = 0; i < n; i++) {
    cin >> m;
    arr[i] = m;
    srt.push_back(m);
  }

  sort(srt.begin(), srt.end());
  srt.erase(unique(srt.begin(), srt.end()), srt.end());

  int index, start, end, mid;
  for (int i = 0; i < n; i++) {
    start = 0;
    end = srt.size() - 1;
    while (start <= end) {
      mid = (start + end) / 2;
      if (arr[i] == srt[mid]) {
        arr[i] = mid;
        break;
      }
      else {
        if (arr[i] < srt[mid])
          end = mid - 1;
        else
          start = mid + 1;
      }
    }
  }

  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
}