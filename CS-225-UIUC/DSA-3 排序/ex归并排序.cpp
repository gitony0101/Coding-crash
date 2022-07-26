// #define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

// Function to Merge Arrays L and R into A.
// lefCount = number of elements in L
// rightCount = number of elements in R

void Merge(int *A, int *L, int leftCount, int *R, int rightCount) {
  int i, j, k; //
  // i - to mark the index of left aubarray (L)
  // j - to mark the index of right sub-raay (R)
  // k - to mark the index of merged subarray (A)
  i = 0;
  j = 0;
  k = 0;
  while (i < leftCount && j < rightCount) {
    if (L[i] < R[i]) {
      A[k++] = L[i++];
    } else {
      A[k++] = R[j++];
    }
  }
  while (i < leftCount) {
    A[k++] = L[i++];
  }
  while (j < rightCount) {
    A[k++] = R[j++];
  }
}

void MergeSort(int *A, int n) {
  int mid, i, *L, *R;
  if (n < 2) {
    return;
  }
  mid = n / 2;
  L = new int[mid];
  R = new int[n - mid];
  for (i = 0; i < mid; i++) {
    L[i] = A[i]; // creating left subarray
  }
  for (i = mid; i < n; i++) {
    R[i - mid] = A[i]; // creating right subarray
  }
}

int main() {

  printf("\n");
  return 0;
}
