#include <iostream>
#include <vector>
#include <deque>
using namespace std;

int main() {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  
  int N, n, M, m;
  cin >> N;

  vector<int> isStack;
  deque<int> element;

  for (int i = 0; i < N; i++) {
    cin >> n;
    isStack.push_back(n);
  }
  
  for (int i = 0; i < N; i++) {
    cin >> n;
    if (!isStack[i])
      element.push_back(n);
  }

  cin >> M;
  for (int i = 0; i < M; i++) {
    cin >> m;
    element.push_front(m);
  }

  while (M--) {
    cout << element.back() << '\n';
    element.pop_back();
  }
}