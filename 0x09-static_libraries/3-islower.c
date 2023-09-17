#include "main.h"
/**
 * _islower - lowercase identifier
 * Description: using _islower
 * @c: alphabets collector
 * Return: 1
 */
int _islower(int c)
{
	char i;
	int low = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
		{
			low = 1;
		}
	}
	return (low);
}
