#include <iostream>
#include <deque>
using namespace std;

class myDeque {
  private:
    deque<int> d;
  public:
    void command(int n) {
      if (n == 1) com1();
      else if (n == 2) com2();
      else if (n == 3) com3();
      else if (n == 4) com4();
      else if (n == 5) com5();
      else if (n == 6) com6();
      else if (n == 7) com7();
      else if (n == 8) com8();
    }
    void com1() {
      int x;
      cin >> x;
      d.push_front(x);
    }
    void com2() {
      int x;
      cin >> x;
      d.push_back(x);
    }
    void com3() {
      if (d.empty())
        cout << -1 << '\n';
      else {
        cout << d.front() << '\n';
        d.pop_front();
      }
    }
    void com4() {
      if (d.empty())
        cout << -1 << '\n';
      else {
        cout << d.back() << '\n';
        d.pop_back();
      }
    }
    void com5() {
      cout << d.size() << '\n';
    }
    void com6() {
      if (d.empty())  cout << 1 << '\n';
      else  cout << 0 << '\n';
    }
    void com7() {
      if (d.empty())  cout << -1 << '\n';
      else  cout << d.front() << '\n';
    }
    void com8() {
      if (d.empty())  cout << -1 << '\n';
      else  cout << d.back() << '\n';
    }
};

int main() {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int N, n;
  myDeque d;
  cin >> N;

  while (N--) {
    cin >> n;
    d.command(n);
  }
}