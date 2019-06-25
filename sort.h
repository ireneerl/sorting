#include <stdio.h>
#include <iostream>
#include <time.h>

using namespace std;

#define N_DATA 100
#define THREAD_MAX 4

void q_sort(int input[], int low, int high);
void merge(int input[], int left, int med, int right);
void merge_sort(int input[], int left, int right);
void bubble_sort(int input[], int size);
void insertion_sort(int input[], int size);
void printArray(int input[], int size);
void try_to_sort(int arr[]);
void swap(int* a, int* b);
void radix_sort(int input[], int size);
