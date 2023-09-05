#include <stdio.h>
#include <math.h>

/**
 * main - prints the largest prime factor of the number 612852475143
 * Return: Always (0)
 */

int main(void)
{
	long s, a;
	long i = 612852475143;
	double n = sqrt(i);

	for (s = 1; s <= n; s++)
	{
		if (i % s == 0)
		{
			a = i / s;
		}
	}
	printf("%ld\n", a);
	return (0);
}
