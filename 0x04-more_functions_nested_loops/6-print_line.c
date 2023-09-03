#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times the character to print
 * Return: Always (0)
 */

void print_line(int n)
{
	int y;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (y = 0; y < n; y++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
