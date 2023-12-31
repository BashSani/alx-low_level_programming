#include <stdio.h>
#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: first substring
 * @needle: second substring
 * Return: Always (0)
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *a = haystack;
		char *b = needle;

		while (*a == *b && *b != '\0')
		{
			a++;
			b++;
		}
		if (*b == '\0')
			return (haystack);
	}
	return (NULL);
}
