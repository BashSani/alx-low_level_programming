#include "main.h"
/**
 * print_alphabet - print alphabet in lowercase
 */
void print_alphabet(void)
{
	char alpa;

	for (alpa = 'a'; alpa <= 'z'; alpa++)
		_putcar(alpa);
	_putchar('\n');
}
