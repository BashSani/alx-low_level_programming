#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: first integer
 * @height: second integer
 * Return: Always(0)
 */
int **alloc_grid(int width, int height)
{
	int k, l;
	int  **s;

	s = malloc(sizeof(*s) * height);
	if (width <= 0 || height <= 0 || s == 0)
	{
		return (NULL);
	}
	else
	{
		for (k = 0; k < height; k++)
		{
			s[k] = malloc(sizeof(**s) * width);
			if (s[k] == 0)
			{
				while (k--)
					free(s[k]);
				free(s);
				return (NULL);
			}
			for (l = 0; l < width; l++)
				s[k][l] = 0;
		}
	}
	return (s);
}
