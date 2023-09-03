#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9
 * Return: Always (0)
 */

void print_most_numbers(void)
{
	int k = 0;

	for (; k <= 9; k++)
	{
		if (k == 2 || k == 4)
		{
			continue;
		}
		else
		{
		_putchar(k + '0');
		}
	}
	_putchar('\n');
}
