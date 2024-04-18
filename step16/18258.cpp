#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

class myQue {
  private:
    queue<int> que;
  public:
    void _command(string com) {
      if (com == "push") {
        int n;
        cin >> n;
        _push(n);
      }
      else if (com == "pop")
        _pop();
      else if (com == "size")
        _size();
      else if (com == "empty")
        _empty();
      else if (com == "front")
        _front();
      else if (com == "back")
        _back();
      else
        cout << "wrong command\n";
    }
    void _push(int n) {
      que.push(n);
    }
    void _pop() {
      if (que.empty())
        cout << -1 << '\n';
      else {
        cout << que.front() << '\n';
        que.pop();
      }
    }
    void _size() {
      cout << que.size() << '\n';
    }
    void _empty() {
      if (que.empty())
        cout << 1 << '\n';
      else
        cout << 0 << '\n';
    }
    void _front() {
      if (que.empty())
        cout << -1 << '\n';
      else
        cout << que.front() << '\n';
    }
    void _back() {
      if (que.empty())
        cout << -1 << '\n';
      else
        cout << que.back() << '\n';
    }
};

int main() {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  myQue q;

  int N;  string com;
  cin >> N;

  while (N--) {
    cin >> com;
    q._command(com);
  }
}