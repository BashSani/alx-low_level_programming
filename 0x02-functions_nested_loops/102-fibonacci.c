#include <stdio.h>

/**
 * main - print the first 100 Fibonacci numbers
 * Return: Always (0)
 */

int main(void)
{
	int i;
	long int j = 1, k = 2, l;

	for (i = 0; i < 50; i++)
	{
		l = j + k;
		printf("%ld", l);

		j = k;
		k = l;
		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
