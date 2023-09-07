#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * Return: Always(0)
 */

char *str_concat(char *s1, char *s2)
{
	int y = 0, z = 0, x = 0, s = 0;
	char *j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[y])
		y++;

	while (s2[z])
		z++;
	s = y + z;
	j = malloc((sizeof(char) * s) + 1);

	if (j == NULL)
		return (NULL);
	z = 0;
	while (x < s)
	{
		if (x <= y)
			j[x] = s1[x];
		if (x >= y)
		{
			j[x] = s2[z];
			z++;
		}
		x++;
	}
	j[x] = '\0';
	return (j);
}
