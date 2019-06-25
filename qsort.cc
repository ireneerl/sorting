#include "sort.h"

int partition (int input[], int low, int high){
  int pivot = input[high];
  int i = (low - 1);

  for(int j=low; j <= high-1; j++){
    if(input[j] <= pivot){
      i++;
      swap(&input[i], &input[j]);
    }
  }
  swap(&input[i+1], &input[high]);
  return (i+1);
}

void q_sort(int input[], int low, int high){
  if(low < high){
    int part_idx = partition(input, low, high);
    q_sort(input, low, part_idx - 1);
    q_sort(input, part_idx + 1, high);
  }
}
