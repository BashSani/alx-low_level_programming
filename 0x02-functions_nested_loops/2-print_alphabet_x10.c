#include "main.h"
/**
 * print_alphabet - prints 10 times alphabet
 *
 * Description: print_alphabet_x10
 * Return: nothing
*/
void print_alphabet_x10(void)
{
	char al;
	int i;

	i = 0;
	while (i < 10)
	{
		al = 'a';
		while (al <= 'z')
		{
			_putchar(al);
			al++;
		}
		_putchar('\n');
		i++;
	}
}
