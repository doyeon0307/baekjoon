#include <iostream>
#include <vector>
using namespace std;

class myStack {
  private:
    vector<int> stack;
  public:
    void command (int);
    void push (int);
    void pop (void);
    void size (void);
    void isEmpty (void);
    void top (void);
};

int main() {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int N, n;
  cin >> N;

  myStack stack;

  while (N--) {
    cin >> n;
    stack.command(n);
  }
}

void myStack::command (int n) {
  if (n == 1) {
    int x;
    cin >> x;
    push(x);
  }
  else if (n == 2)
    pop();
  
  else if (n == 3)
    size();
  
  else if (n == 4)
    isEmpty();
  
  else
    top();
}

void myStack::push (int x) {
  stack.push_back(x);
}

void myStack::pop () {
  if (stack.size() != 0) {
    cout << *(stack.end() - 1) << '\n';
    stack.pop_back();
  }
  else
    cout << -1 << '\n';
}

void myStack::size () {
  cout << stack.size() << '\n';
}

void myStack::isEmpty () {
  if (stack.size() == 0)
    cout << 1 << '\n';
  else
    cout << 0 << '\n';
}

void myStack::top () {
  if (stack.size() != 0)
    cout << *(stack.end() - 1) << '\n';
  else 
    cout << -1 << '\n';
}