#include "main.h"
/**
 * print_sign - print sign
 * description: function that prints the sign of a number
 * @n: value in question
 * Return: 1
 */
int print_sign(int n)
{
	int neg = -1;
	char cha = (char) neg;

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (cha);
	}
}
