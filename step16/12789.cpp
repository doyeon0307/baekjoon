#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int N, n;
  cin >> N;

  queue<int> line;
  vector<int> stack;
  for (int i = 0; i < N; i++) {
    cin >> n;
    line.push(n);
  }

  int order = 1;
  bool nice = true;
  int frt;

  while (1) {
    if (!line.empty()) {
      frt = line.front();
      if (frt == order) {
        line.pop();
        order++;
      }
      else {
        if (!stack.empty() && stack.back() == order) {
          order++;
          stack.pop_back();
        }
        else if (!stack.empty() && frt > stack.back()) {
          nice = false;
          break;
        }
        else {
          stack.push_back(frt);
          line.pop();
        }
      }
    }
    else {
      if (stack.empty())
        break;
      else {
        if (stack.back() == order) {
          order++;
          stack.pop_back();
        }
        else {
          nice = false;
          break;
        }
      }
    }
  }
  if (nice) cout << "Nice";
  else  cout << "Sad";
}