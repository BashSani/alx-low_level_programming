#include <stdio.h>
/**
 * main - Starting point
 * Description: 'possible different combinations of two digit'
 * Return: Always 0
 */
int main(void)
{
	int x = 0, y = 0;

	while (x <= 9)
	{
		while (y <= 9)
		{
			if (x != y && x < y)
			{
				putchar(x + 48);
				putchar(y + 48);
				if (x + y != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			y++;
		}
		y++;
	}
	putchar('\n');
	return (0);
}
