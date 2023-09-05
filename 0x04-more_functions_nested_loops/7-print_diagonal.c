#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: the number of times the character \ should be printed
 * Return: Always (0)
 */

void print_diagonal(int n)
{
	int p, x;

		for (p = 0; p < n; p++)
		{
			if (n > 1)
				for (x = 1; x <= p; x++)
				{
					_putchar(' ');
				}
			_putchar('\\');
			_putchar('\n');
		}
		if (n <= 0)
		{
			_putchar('\n');
		}
}
