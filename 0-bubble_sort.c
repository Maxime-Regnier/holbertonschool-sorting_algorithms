#include <stdio.h>
#include "sort.h"
/**
 * 
 * 
 * 
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
for (m = 0; m < size -1; m++)
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