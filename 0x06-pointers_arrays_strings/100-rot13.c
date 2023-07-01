#include "main.h"
#include <stdio.h>
/**
 * rot13 - encode a strings
 * @n: pointer to string
 * Return: (n)
 */
char *rot13(char *n)
{
	int x, y;
	char input1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char input2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; n[x] != '\0'; x++)
	{
		for (y = 0; y < 52; y++)
		{
			if (n[x] == input1[y])
			{
				n[x] = input2[y];
				break;
			}
		}
	}
	return (n);
}
