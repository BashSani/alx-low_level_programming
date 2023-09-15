#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -  prints the sum of the two diagonals
 * @a: input
 * @size: int size
 * Return: Always(0)
 */

void print_diagsums(int *a, int size)
{
	int b, c = 0, d = 0;

	for (b = 0; b < size; b++)
	{
		c += a[b];
		d += a[size - b - 1];
		a += size;
	}
	printf("%d, ", c);
	printf("%d\n", d);
}
