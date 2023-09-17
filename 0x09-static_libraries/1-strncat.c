#include "main.h"
/**
 *_strncat - concatenate 2 strings
 *@dest: destination input
 *@src: pointer input
 *@n: number from src
 *Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int s = 0;
	int b = 0;

	s = 0;
	while (dest[s] != '\0')
	{
		s++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[s] = src[b];
		s++;
		b++;
	}
	dest[s] = '\0';
	return (dest);
}
