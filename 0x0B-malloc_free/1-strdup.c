#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicate of the string
 * @str: the new string obtained
 * Return: Always(0)
 */
char *_strdup(char *str)
{
	int y = 0, z = 1;
	char *x;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[z])
	{
		z++;
	}
	x = malloc((sizeof(char) * z) + 1);
	if (x == NULL)
		return (NULL);
	while (y < z)
	{
		x[y] = str[y];
		y++;
	}
	x[y] = '\0';
	return (x);
}
