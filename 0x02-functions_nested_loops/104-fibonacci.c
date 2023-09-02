#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 * Return: Always (0)
 */

int main(void)
{
	int c;
	unsigned long b = 0, a = 1, s;
	unsigned long bh, bhh, ah, ahh;
	unsigned long h, hh;

	for (c = 0; c < 92; c++)
	{
		s = b + a;
		printf("%lu, ", s);
		b = a;
		a = s;
	}
	bh = b / 10000000000;
	ah = a / 10000000000;
	bhh = b % 10000000000;
	ahh = a % 10000000000;
	for (c = 93; c < 99; c++)
	{
		h = bh + ah;
		hh = bhh + ahh;
		if (bhh + ahh > 9999999999)
		{
			h += 1;
			hh %= 10000000000;
		}
		printf("%lu%lu", h, hh);
		if (c != 98)
			printf(",");
		printf(" ");
		bh = ah;
		bhh = ahh;
		ah = h;
		ahh = hh;
	}
	printf("\n");
	return (0);
}
