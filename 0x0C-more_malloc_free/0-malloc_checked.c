#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - allocates memory
 * @b: number
 *
 * Return: 0
 */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}
