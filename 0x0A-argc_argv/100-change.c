#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints the minimum number of coins
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int a, Ncent = 0, amount = atoi(argv[1]);
		int cents[] = {25, 10, 5, 2, 1};

		for (a = 0; a < 5; a++)
		{
			if (amount >= cents[a])
			{
				Ncent += amount / cents[a];
				amount = amount % cents[a];
				if (amount % cents[a] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", Ncent);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
