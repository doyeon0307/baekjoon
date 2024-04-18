#include <iostream>
using namespace std;

#define MAX_SIZE 500000
int tmp[MAX_SIZE];

void merge_sort(int a[], int p, int r, int &cnt, int k);
void merge(int a[], int p, int q, int r, int &cnt, int k);

int main() {
  cin.tie(NULL);
  ios_base::sync_with_stdio(false);

  int n, k;
  cin >> n >> k;

  int A[n];
  for (int i = 0; i < n; i++)
    cin >> A[i];
  
  int cnt = 0;
  merge_sort(A, 0, n - 1, cnt, k);
  if (cnt < k)  cout << -1;
}

void merge_sort(int a[], int p, int r, int &cnt, int k) {
  if (p < r) { //length >= 1 || only unsorted;
    int q = (p + r) / 2;            //mid
    merge_sort(a, p, q, cnt, k);    //left
    merge_sort(a, q+1, r, cnt, k);  //right
    merge(a, p, q, r, cnt, k);      //[p ~ q] + [q+1 ~ r] merge
  }
}

void merge(int a[], int p, int q, int r, int &cnt, int k) {
  int i, j, t;
  i = p;      //left list
  j = q + 1;  //right list
  t = 0;      //tmp list

  while (i <= q && j <= r) {  //range
    if (a[i] < a[j])      //left < right
      tmp[t++] = a[i++];  //tmp <- left
    else                  //right < left
      tmp[t++] = a[j++];  //tmp <- right
  }

  while (i <= q)  //left
    tmp[t++] = a[i++];  //tmp <- left
  
  while (j <= r) //right
    tmp[t++] = a[j++];  //tmp <- right
  
  //tmp(new) -> a(original)
  i = p;  //a
  t = 0;  //tmp
  while (i <= r) {
    a[i++] = tmp[t++];
    cnt++;
    if (cnt == k)
      cout << tmp[t - 1];
  }
}