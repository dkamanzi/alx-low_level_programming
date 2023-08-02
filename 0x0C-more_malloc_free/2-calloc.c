#include <stdlib.h>
#include "main.h"

/**
 * _memset - Fills a memory area with a specified byte value.
 * @s: Memory area to be filled.
 * @b: Byte value to copy.
 * @n: Number of times to copy 'b'.
 *
 * Return: Pointer to the memory area 's'.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}

return (s);
}

/**
 * _calloc - Allocates memory for an array of a specified size.
 * @nmemb: Number of elements in the array.
 * @size: Size of each element.
 *
 * Return: Pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *memory_ptr;

if (nmemb == 0 || size == 0)
return (NULL);

memory_ptr = malloc(size * nmemb);
if (memory_ptr == NULL)
return (NULL);

_memset(memory_ptr, 0, nmemb * size);

return (memory_ptr);
}
