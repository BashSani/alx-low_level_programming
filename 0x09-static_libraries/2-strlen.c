#include <stdio.h>

/**
 * _strlen - length of a string
 * @s: string parameter
 * Return: Always(0)
 */

int _strlen(char *s)
{
	int l = 0;

	while (*s++)
		l++;
	return (l);
}
