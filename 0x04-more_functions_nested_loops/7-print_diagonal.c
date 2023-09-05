#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: the number of times the character \ should be printed
 * Return: Always (0)
 */

void print_diagonal(int n)
{
	int p, x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (p = 1; p <= n; p++)
		{
			for (x = 1; x <= p; x++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
