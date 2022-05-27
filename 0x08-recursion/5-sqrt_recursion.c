#include "main.h"

/**
 * auxfunction - natural square root of a number
 * @n: n
 * @i: multiplo
 * Return: Always 0.
 */
int auxfunction(int n, int i)
{
	if (n == (i * i))
	{
		return (i);
	}
	else if (n > (i * i))
	{
		return (auxfunction(n, i + 1));
	}
	else
	{
		return (-1);
	}
}

/**
 * _sqrt_recursion - natural square root of a number
 * @n: n
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (auxfunction(n, 1));
}


