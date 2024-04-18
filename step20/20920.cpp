#include <iostream>
#include <cstring>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(const pair<string, int>& a, const pair<string, int>& b) {
  if (a.second == b.second) {
    if (a.first.length() == b.first.length())
      return (a.first < b.first);
    else
      return (a.first.length() > b.first.length());
  }
  else
    return (a.second > b.second);
}


int main() {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int n, m;
  string word;
  map<string, int> w;

  cin >> n >> m;
  while (n--) {
    cin >> word;
    if (word.length() >= m) {
      if (w.find(word) == w.end())
        w.insert(make_pair(word, 1));
      else
        w[word]++;
    }
  }

  //copy to vector -> sort
  vector<pair<string, int>> v(w.begin(), w.end());
  sort(v.begin(), v.end(), cmp);
  
  for (auto p : v)  
    cout << p.first << '\n';
}