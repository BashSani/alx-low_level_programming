#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *argstostr - concatenates all arguments of program
 *@ac: arguments count
 *@av: arguments vector
 *
 *Return: Always(0)
 */
char *argstostr(int ac, char **av)
{
	int a = 0, b = 0, c = 0, d = 0;
	char *x;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (b < ac)
	{
		while (av[b][c])
		{
			a++;
			c++;
		}
		c = 0;
		b++;
	}
	x = malloc((sizeof(char) * a) + ac + 1);
	b = 0;
	while (av[b])
	{
		while (av[b][c])
		{
			x[d] = av[b][c];
			d++;
			c++;
		}
		x[d] = '\n';
		c = 0;
		d++;
		b++;
	}
	d++;
	x[d] = '\0';
	return (x);
}
