#include "main.h"
/**
 * print_last_digit - print the last of a number
 * @n: extract the last
 * Return: n
 */
int print_last_digit(int n)
{
	int x;

	if (n < 0)
		n = -n;
	x = n % 10;
	if (x < 0)
		x = -x;
	_putchar(a + '0');
	return (x);
}
