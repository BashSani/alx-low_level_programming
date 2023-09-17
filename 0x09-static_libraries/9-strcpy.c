#include "main.h"
#include <stdio.h>

/**
 * _strcpy - string pointed
 * @dest: buffer pointer
 * @src: string of pointer
 * Return: return dest
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	a = -1;
	do {
		a++;
		dest[a] = src[a];
	} while (src[a] != '\0');
	return (dest);
}
