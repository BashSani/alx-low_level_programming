#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: Number
 * Return: return (1) for digit (0) for not
 */

int _isdigit(int c)

{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
