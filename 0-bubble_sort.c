#include <stdio.h>
#include "sort.h"
/**
  * bubble_sort - Sorts an array of integers in ascending order
  * @array: Pointer to the array of integers to sort
  * @size: Number of elements in the array
  *
  * Description: Implements the Bubble Sort algorithm to sort the array.
  *              After each swap of elements, the current state of the array
  *              is printed using the print_array function. The function
  *              handles edge cases where the array is NULL or contains
  *              fewer than 2 elements.
  */
void bubble_sort(int *array, size_t size)
{
int temp;
size_t n, m;
if (array == NULL || size < 2)
return;
n = 0;
while (n < size)
{
for (m = 0; m < size - 1; m++)
{
if (array[m] > array[m + 1])
{
temp = array[m];
array[m] = array[m + 1];
array[m + 1] = temp;
print_array(array, size);
}
}
n++;
}
}
