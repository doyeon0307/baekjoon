#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>
using namespace std;

bool compare(tuple<int, int, string> t1, tuple<int, int , string> t2) {
  if (get<1>(t1) < get<1>(t2))
    return true;
  else if (get<1>(t1) == get<1>(t2))
    return (get<0>(t1) < get<0>(t2));
  else
    return false;
}

int main() {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<tuple<int, int, string>> v;
  int order;
  int age;
  string name;
  for (int i = 0; i < n; i++) {
    cin >> age >> name;
    v.push_back(make_tuple(i, age, name));

  }

  sort(v.begin(), v.end(), compare);
  for (auto p : v)
    cout << get<1>(p) << " " << get<2>(p) << '\n';
}