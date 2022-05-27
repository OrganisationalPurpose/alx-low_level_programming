#include "main.h"

/**
 * functionaux - prime number.
 * @n: n
 * @i: i
 * Return: Always 0.
 */
int functionaux(int n, int i)
{
	if (i == n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (functionaux(n, i + 1));
}

/**
 * is_prime_number - prime number.
 * @n: n
 * Return: Always 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (functionaux(n, 2) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
