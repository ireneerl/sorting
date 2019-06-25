#include "sort.h"

#include <pthread.h>

// int arr[N_DATA] = {12, 11, 13, 5, 6, 7};

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
}

int main(int argc, char* argv[])
{

  int num=0;
  int arr[N_DATA];
  // generating random values in array
  for (int i = 0; i < N_DATA; i++)
    arr[i] = rand() % 100;
  int arr_size = sizeof(arr)/sizeof(arr[0]);
  clock_t t1, t2;
  if ( argc == 2 )
    num = (int) atoi(argv[1]);
  else
  {
    printf("Usage: 1. insertionSort 2.quickSort 3.MergeSort 4. BubbleSort 5.RadixSort  <<input>>\n");
    return -1;
  }

  printf("Given array is \n");
  printArray(arr, arr_size);
  t1 = clock();
  switch ( num )
  {
    case 1:
      /*insertionSort Sort*/
      insertion_sort(arr, arr_size);
      break;
    case 2:
      /*Quick Sort*/
      q_sort(arr, 0, arr_size - 1);
      break;
    case 3:
      /*Merge Sort*/
      merge_sort(arr, 0, arr_size - 1);
      break;
    case 4:
      /*Buble Sort*/
      bubble_sort(arr, arr_size);
      break;
    case 5:
      /*Buble Sort*/
      radix_sort(arr, arr_size);
      break;
    default:
        printf("The value is not correct\n");
        break;
  }
	t2 = clock();
  printf("\nSorted array is \n");
  printArray(arr, arr_size);
  printf("Time taken: %f" , (t2 - t1) /(double)CLOCKS_PER_SEC);

}
