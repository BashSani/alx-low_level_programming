#include "main.h"

/**
 * more_numbers - prints 10 numbers, from 0 to 14
 * Return: Always (0)
 */

void more_numbers(void)
{
	int k, i, j;

	for (k = 1; k <= 10; k++)
	{
		for (i = 0; i <= 14; i++)
		{
			j = i;
			if (i > 9)
			{
				_putchar(1 + 48);
				j = i % 10;
			}
			_putchar(j + 48);
		}
		_putchar('\n');
	}
}
