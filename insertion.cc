#include "sort.h"

void insertion_sort(int input[], int size){
  int i, j, key;
  for (i = 1; i < size; i++){
    key = input[i];
    j = i - 1;
    while (j >= 0 && input[j] > key) {
      input[j+1] = input[j];
      j = j - 1;
    }
    input[j + 1] = key;
  }
}
