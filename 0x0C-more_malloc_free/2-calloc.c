#include "main.h"
#include <stdlib.h>
/**
 * *_memset - memory
 * @s: memory area
 * @b: char to copy
 * @n: number
 *
 * Return: 0
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
 * *_calloc - allocates memory
 * @nmemb: element
 * @size: size
 *
 * Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(size * nmemb);
	if (a == NULL)
		return (NULL);
	_memset(a, 0, nmemb * size);
	return (a);
}
