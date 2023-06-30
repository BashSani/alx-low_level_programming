#include <stdio.h>
/**
 * main - Starting point
 * Description: 'possible different combinations of two digit'
 * Return: Always 0
 */
int main(void)
{
	int y, z;

	for (y = 48; y <= 56; y++)
	{
		for (z = 49; z <= 57; z++)
		{
			if (z > y)
			{
				putchar(y);
				putchar(z);
				if (y != 56 || z != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
