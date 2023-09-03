#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9
 * Return: Always (0)
 */

void print_numbers(void)
{
	int a = 0;

	do {
		_putchar(a + 48);
		a++;
	} while (a >= 0 && a <= 9);
	_putchar("\n");
}
