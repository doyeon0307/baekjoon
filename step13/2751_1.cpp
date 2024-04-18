#include <iostream>
using namespace std;

void ReheapUp(int*, int, int);
void ReheapDown(int*, int, int);

int main() {
  int N;
  cin >> N;

  int heap[N];
  //make heap
  for (int i = 0; i < N; i++) {
    cin >> heap[i];
    ReheapUp(heap, 0, i);
  }

  //delete & print root
  for (int i = N - 1; i >= 0; i--) {
    cout << heap[0] << endl;
    heap[0] = heap[i];
    ReheapDown(heap, 0, i);
  }
}

void ReheapUp(int* heap, int root, int bottom) {
  int parent;
  if (bottom > root) {
    parent = (bottom - 1) / 2;
    if (heap[parent] > heap[bottom]) {
      //swap
      int temp = heap[parent];
      heap[parent] = heap[bottom];
      heap[bottom] = temp;
      //recursion
      ReheapUp(heap, root, parent);
    }
  }
}

void ReheapDown(int* heap, int root, int bottom) {
  int minChild;
  int leftChild = 2 * root + 1;
  int rightChild = 2 * root + 2;

  if (leftChild <= bottom) {
    if (leftChild == bottom)
      minChild = leftChild;
    else {
      if (leftChild < rightChild)
        minChild = leftChild;
      else
        minChild = rightChild;
    }
  }

  if (heap[root] > heap[minChild]) {
    //swap
    int temp = heap[root];
    heap[root] = heap[minChild];
    heap[minChild] = temp;
    //recursion
    ReheapDown(heap, minChild, bottom);
  }
}