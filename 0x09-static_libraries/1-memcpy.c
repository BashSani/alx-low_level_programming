#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: input memory area
 * @src: bytes from memory area
 * @n: functions to copy
 * Return: Always(0)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
