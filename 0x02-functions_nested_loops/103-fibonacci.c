#include <stdio.h>

/**
 * main - Fibonacci sequence whose values do not exceed 4000000
 * Return: Always (0)
 */

int main(void)
{
	float h = 0;
	unsigned long b = 0, a = 1, s;

	while (1)
	{
		s = b + a;
		if (s > 4000000)
			break;
		if ((s % 2) == 0)
			h += s;

		b = a;
		a = s;
	}
	printf("%.0f\n", h);
	return (0);
}
