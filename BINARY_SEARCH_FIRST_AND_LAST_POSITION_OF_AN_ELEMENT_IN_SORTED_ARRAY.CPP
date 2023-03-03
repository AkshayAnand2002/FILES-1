https://www.codingninjas.com/codestudio/problems/first-and-last-position-of-an-element-in-sorted-array_1082549?leftPanelTab=0
#include <bits/stdc++.h>
using namespace std;
int firstOccurance(vector<int> &arr, int n, int k) {
  int start = 0;
  int end = n - 1;
  int index = -1;
  while (start <= end) {
    int mid = start + (end - start) / 2;
    if (arr[mid] == k) {
      index = mid;
      end = mid - 1;
      //for first occurence
      //as it stops checking for further values and points at first value.
    } else if (arr[mid] > k) {
      end = mid - 1;
    } else {
      start = mid + 1;
    }
  }
  return index;
}
int lastOccurance(vector<int> &arr, int n, int k) {
  int start = 0;
  int end = n - 1;
  int index = -1;
  while (start <= end) {
    int mid = start + (end - start) / 2;
    if (arr[mid] == k) {
      index = mid;
      start = mid + 1;
      //for last occurence.
      //as it constantly checks from start and continues till end.
    } else if (arr[mid] > k) {
      end = mid - 1;
    } else {
      start = mid + 1;
    }
  }
  return index;
}

pair<int, int> firstAndLastPosition(vector<int> &arr, int n, int k) {

  int first = firstOccurance(arr, n, k);
  int second = lastOccurance(arr, n, k);
  return {first, second};
}
