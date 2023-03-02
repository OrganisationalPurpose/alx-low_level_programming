#include <stdio.h>

/**
 * main - considering the terms in the Fibonacci sequence whose values
 *		do not exceed 4,000,000, this program finds and prints the sum of
 *		the even-valued terms
 *
 * Return: Always 0 (Success)
 * Author: IanoNjuguna
 */

int main(void)
{
	unsigned long int fib1 = 0;
	unsigned long int fib2 = 1;
	unsigned long int fib_sum = 0;
	unsigned long int total = 0;

	for (;;)
	{
		fib_sum = fib1 + fib2;
		fib1 = fib2;
		fib2 = fib_sum;

		if (fib_sum > 4000000)
			break;

		if ((fib_sum % 2) == 0)
		{
			total += fib_sum;
		}
	}
	printf("%ld\n", total);
	return (0);
}

