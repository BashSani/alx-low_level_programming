#include "main.h"
#include <stdio.h>
/**
 * puts2 - prints every other character of a string
 * @str: string parameter
 * Return: Always(0)
 */

void puts2(char *str)
{
	int a = 0, b = 0, c;
	char *x = str;

	while (*x != '\0')
	{
		x++;
		a++;
	}
	b = a - 1;
	for (c = 0; c <= b; c++)
	{
		if (c % 2 == 0)
		{
			putchar(str[c]);
		}
	}
	putchar('\n');
}
