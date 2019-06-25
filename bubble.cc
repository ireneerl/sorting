#include "sort.h"

void bubble_sort(int input[], int size){
   int i, j;
   for (i = 0; i < size-1; i++)
       for (j = 0; j < size-i-1; j++)
           if (input[j] > input[j+1])
              swap(&input[j], &input[j+1]);
}
