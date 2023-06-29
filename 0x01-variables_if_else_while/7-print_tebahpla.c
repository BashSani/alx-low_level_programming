#include <stdio.h>
/**
 * main - Starting point
 * Description: 'Lowercase alphabet reverse'
 * Return: Always 0
 */
int main(void)
{
	int x = 122;

	while (x >= 97)
	{
		putchar(x);
		x--;
	}
	putchar('\n');
	return (0);
}
