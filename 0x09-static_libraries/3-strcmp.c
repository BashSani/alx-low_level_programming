#include "main.h"
/**
 * _strcmp - two strings comparing
 * @s1: 1string to compare
 * @s2: 2string to compare
 * Return: s1 and s2
 */
int _strcmp(char *s1, char *s2)
{
	int x = 0;

	while (s1[x] != '\0' && s2[x] != '\0')
	{
		if (s1[x] != s2[x])
		{
			return (s1[x] - s2[x]);
		}
		x++;
	}
	return (0);
}
