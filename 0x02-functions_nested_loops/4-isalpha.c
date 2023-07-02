#include "main.h"
/**
 * _isalpha - check for alphabet
 * Description: using _putchar
 * @c: character collector
 * Return: 1
 */
int _isalpha(int c)
{
	char low, upp;
	int alp = 0;

	for (low = 'a'; low <= 'z'; low++)
	{
		for (upp = 'A'; upp <= 'Z'; upp++)
		{
			if (low == c || upp == C)
			{
				alp = 1;
			}
		}
	}
	return (alp);
}
