#include <iostream>
#include <queue>
using namespace std;

int main() {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);
  
  int n;
  cin >> n;

  queue<int> card;
  for (int i = 1; i <= n; i++)
    card.push(i);

  while (card.size() > 1) {
    card.pop();
    card.push(card.front());
    card.pop();
  }

  cout << card.front();
}