#include "main.h"
/**
 * _strncpy - string copy
 * @dest: copying file
 * @src: copyiing file
 * @n: character to copy
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int b;

	b = 0;
	while (b < n && src[b] != '\n')
	{
		dest[b] = src[b];
		b++;
	}
	while (b < n)
	{
		dest[b] = '\0';
		b++;
	}
	return (dest);
}
