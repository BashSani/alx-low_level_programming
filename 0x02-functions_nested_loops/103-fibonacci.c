#include <stdio.h>

/**
 * main - Fibonacci sequence whose values do not exceed 4000000
 * Return: Always (0)
 */

int main(void)
{
	float h;
	unsigned long b = 1, a = 2, s;

	while (s + b < 4000000)
	{
		s += b;
		if (s % 2 == 0)
			s += a;
		b = a - b;
		++h;
	}
	printf("%ld\n", s);
	return (0);
}
