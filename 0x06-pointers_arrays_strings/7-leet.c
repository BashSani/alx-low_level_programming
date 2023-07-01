#include "main.h"
/**
 * leet - encode a string into 1337
 * @x: strings
 * Return: (x)
 */
char *leet(char *x)
{
	int y, z;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (x = 0; x[y] != '\0'; i++)
	{
		for (z = 0; z < 10; z++)
		{
			if (x[y] == s1[z])
			{
				x[y] = s2[z];
			}
		}
	}
	return (x);
}
