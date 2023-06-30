#include "main.h"
/**
 * _strncat - concatenate 2 strings
 * @dest: destination input
 * @src: pointer input
 * @n: number from src
 * Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int s, b;
	
	s = 0;
	while (dest[s])
		s++;
	for (b = 0; b < n && src[b] != '\0'; b++)
		dest[s + b] = src[b];
	dest[s + b] = '\0';
	return (dest);
}
