#include "main.h"

/**
 *print_square - prints a square
 *@size: size of the square
 *Return: Always (0)
 */

void print_square(int size)
{
	int p, x;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (p = 1; p <= size; p++)
		{
			for (x = 1; x <= size; x++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
