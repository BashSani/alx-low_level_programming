#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string
 * @str: string parameter
 * Return: Always(0)
 */

void puts_half(char *str)
{
	int a, b = 0;

	while (str[b] != '\0')
	{
		b++;
	}
	if (b % 2 == 1)
	{
		a = (b - 1) / 2;
		a += 1;
	}
	else
	{
		a = b / 2;
	}
	for (; a < b; a++)
	{
		putchar(str[a]);
	}
	putchar('\n');
}
