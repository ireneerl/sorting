#include "sort.h"

void merge(int input[], int left, int med, int right){
  int i, j, k;
  int n1 = med - left + 1;
  int n2 = right - med;

  int Left_in[n1], Right_in[n2];

  for (i = 0; i < n1; i++)
      Left_in[i] = input[left + i];
  for (j = 0; j < n2; j++)
      Right_in[j] = input[med + 1+ j];

  /*merge the arrays*/
  i = 0, j = 0, k = left;
  while (i < n1 &&  j < n2){
    if(Left_in[i] < Right_in[i]){
      input[k] = Left_in[i];
      i++;
    }else{
      input[k] = Right_in[j];
      j++;
    } k++;
  }

  while (i < n1) {
    input[k] = Left_in[i];
    i++;
    k++;
  }
  while (j < n2) {
    input[k] = Right_in[j];
    j++;
    k++;
  }

}

void merge_sort(int input[], int left, int right){
  if(left < right){
    int med = left+(right-left)/2;

    merge_sort(input, left, med);
    merge_sort(input, med+1, right);

    merge(input, left, med, right);
  }
}
