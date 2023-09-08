#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * nostring - number of string
 * @x: string pointer
 * Return: Always(0)
 */
int nostring(char *x)
{
	int a, b, c;

	a = 0;
	c = 0;

	for (b = 0; x[b] != '\0'; b++)
	{
		if (x[b] == ' ')
			a = 0;
		else if (a == 0)
		{
			a = 1;
			c++;
		}
	}
	return (c);
}
/**
 *strtow - splits a string into words
 *@str: string to split
 *Return: Always(0)
 */
char **strtow(char *str)
{
	char **k, *l;
	int d, e = 0, f = 0, g, h = 0, i, j;

	while (*(str + f))
		f++;
	g = nostring(str);
	if (g == 0)
		return (NULL);
	k = (char **) malloc(sizeof(char *) * (g + 1));
	if (k == NULL)
		return (NULL);
	for (d = 0; d <= f; d++)
	{
		if (str[d] == ' ' || str[d] == '\0')
		{
			if (h)
			{
				j = d;
				l = (char *) malloc(sizeof(char) * (h + 1));
				if (l == NULL)
					return (NULL);
				while (i < j)
					*l++ = str[i++];
				*l = '\0';
				k[e] = l - h;
				e++;
				h = 0;
			}
		}
		else if (h++ == 0)
			i = d;
	}
	k[e] = NULL;
	return (k);
}
