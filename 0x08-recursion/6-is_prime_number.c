#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - prints prime number
 * @n: int value
 * Return: prime
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}
/**
 * actual_prime - prime calculate
 * @n: int value
 * @i: recursion
 * Return: Always(0)
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
