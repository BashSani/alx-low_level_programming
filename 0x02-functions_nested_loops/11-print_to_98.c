#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print from n to 98
 * @n: numbers
 * Return: always 0
*/

void print_to_98(int n)
{
	for (n = 0; n <= 98; n++)
	{
		if (n == 98)
		{
			printf("%d", n);
			printf("\n");
			break;
		}
		else
		{
			printf("%d, ", n);
		}
	}	
for (n = 0; n >= 98; n--)
{
	if (n == 98)
	{
		printf("%d", n);
		printf("\n");
		break;
	}
	else
	{
		printf("%d, ", n);
	}
}
}

