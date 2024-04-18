#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  vector<int> v;
  int N, n;
  double sum, avg;
  int cen, mod, ran;

  cin >> N;
  for (int i = 0; i < N; i++) {
    cin >> n;
    v.push_back(n);
    sum += n;
  }

  //avg
  avg = sum / N;
  if (avg > -0.5 && avg < 0)
    avg = 0;
  else
    avg = round(avg);

  //center, range
  sort(v.begin(), v.end());
  cen = v[N / 2];
  ran = v.back() - v.front();

  //mode
  vector<int> m;
  int num = v.front();
  int cnt = 0;
  int max = 1;

  for (auto iter = v.begin(); iter != v.end(); iter++) {
    if (num == *iter)
        cnt++;
    else {
      if (cnt > max) {
        max = cnt;
        m.clear();
        m.push_back(num);
      }
      else if (cnt == max)
        m.push_back(num);
      num = *iter;
      cnt = 1;
    }
  }
  //last element
  if (cnt > max) {
    m.clear();
    m.push_back(num);
  }
  else if (cnt == max)
    m.push_back(num);

  if (m.size() == 1)  mod = m.front();
  else  mod = *(m.begin() + 1);

  cout << avg << '\n' << cen << '\n' << mod << '\n' << ran;
}