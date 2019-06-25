#include "sort.h"

int getMax(int input[], int size)
{
    int mx = input[0];
    for (int i = 1; i < size; i++)
        if (input[i] > mx)
            mx = input[i];
    return mx;
}

void countSort(int input[], int size, int exp)
{
    int output[size]; // output array
    int i, count[10] = {0};

    for (i = 0; i < size; i++)
        count[ (input[i]/exp)%10 ]++;

    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];

    for (i = size - 1; i >= 0; i--)
    {
        output[count[ (input[i]/exp)%10 ] - 1] = input[i];
        count[ (input[i]/exp)%10 ]--;
    }

    for (i = 0; i < size; i++)
        input[i] = output[i];
}

void radix_sort(int input[], int size)
{
    int m = getMax(input, size);
    for (int exp = 1; m/exp > 0; exp *= 10)
        countSort(input, size, exp);
}
