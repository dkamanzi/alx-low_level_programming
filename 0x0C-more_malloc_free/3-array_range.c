#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an array of integers within a specified range.
 * @min: Minimum value for the range.
 * @max: Maximum value for the range (inclusive), also the number of elements.
 *
 * Return: Pointer to the new array of integers.
 */
int *array_range(int min, int max)
{
int *result_ptr;
int i, array_size;

if (min > max)
return (NULL);

array_size = max - min + 1;

result_ptr = malloc(sizeof(int) * array_size);

if (result_ptr == NULL)
return (NULL);
for (i = 0; min <= max; i++)
result_ptr[i] = min++;

return (result_ptr);
}
