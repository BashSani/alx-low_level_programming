#include "main.h"
#include <stdio.h>

/**
 * _atoi - convert a string to integer
 * @s: string parameter
 * Return: Always(0)
 */

int _atoi(char *s)
{
	int a = 0, b = 1;

	do {
		if (*s == '-')
			b *= -1;
		else if (*s >= '0' && *s <= '9')
			a = (a * 10) + (*s - '0');
		else if (a > 0)
			break;
	} while (*s++);
	return (a * b);
}
