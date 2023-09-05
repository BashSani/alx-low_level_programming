#include "main.h"

/**
 * main - prints the numbers from 1 to 100
 * print Fizz instead of the number and for the multiples of five print Buzz
 * For numbers which are multiples of both three and five print FizzBuzz.
 * Return: Always (0)
 */

int main(void)
{
	int x;

	for (x = 0; x <= 99; x++)
	{
		if (x % 3 == 0 && !(x % 5 == 0))
			printf("Fizz");
		else if (x % 5 == 0 && !(x % 3 == 0))
			printf("Buzz");
		else if (x % 3 == 0 && x % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", x);
		if (x != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
