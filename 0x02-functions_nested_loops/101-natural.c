#include <stdio.h>

/**
 * main - prints the sum of all the multiples of 3 or 5 below 1024
 * Return: Always (0)
 */

int main(void)
{
	int b = 0;
	int s;

	while (s < 1024)
	{
		if ((s % 3 == 0) || (s % 5 == 0))
		{
			b += s;
		}
		s++;
	}
	printf("%d\n", b);
	return (0);
}
