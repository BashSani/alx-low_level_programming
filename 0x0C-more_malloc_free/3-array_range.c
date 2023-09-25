#include "main.h"
#include <stdlib.h>
/**
 * *array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 *
 * Return: 0
 */
int *array_range(int min, int max)
{
	int *a;
	int b, c;

	if (min > max)
		return (NULL);
	c = max - min + 1;
	a = malloc(sizeof(int) * c);
	if (a == NULL)
		return (NULL);
	for (b = 0; min <= max; b++)
		a[b] = min++;
	return (a);
}
