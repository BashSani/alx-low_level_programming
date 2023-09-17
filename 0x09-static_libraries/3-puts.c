#include "main.h"
#include <stdio.h>
/**
 * _puts - prints a string
 * @str: string parameter
 * Return: Always(0)
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str + 0);
		str++;
	}
	putchar('\n');
}
