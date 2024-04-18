#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int N, M, m;

  cin >> N;
  vector<int> card(N);
  for (int i = 0; i < N; i++)
    cin >> card[i];
  sort(card.begin(), card.end());

  cin >> M;
  int start, end, mid;
  bool found;
  while (M--) {
    cin >> m;

    found = false;
    start = 0;
    end = N - 1;

    while (!found && start <= end) {
      mid = (start + end) / 2;
      if (m == card[mid])
        found = true;
      else {
        if (m < card[mid])
          end = mid - 1;
        else
          start = mid + 1;
      }
    }
    if (found)
      cout << 1 << " ";
    else
    
      cout << 0 << " ";
  }
}