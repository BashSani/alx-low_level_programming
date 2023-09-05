#include "main.h"

/**
 *print_triangle - prints a triangle
 *
 *@size: size of the triangle
 *Return: empty
*/

void print_triangle(int size)
{
	int i, x, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else 
	{
		for (i = 0; i < size; i++)
		{
			for (x = size - i; x > 1; x--)
			{
				_putchar(32);
			}
			for (k = 0; k <= i; k++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
