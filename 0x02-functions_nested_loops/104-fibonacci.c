#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0(Success)
 * Author: IanoNjuguna
 */

int main(void)
{
	unsigned long int fib1 = 1;
	unsigned long int fib2 = 2;
	unsigned long int fib_sum;
	int count;

	for (count = 1; count <= 98; count++)
	{
		if (count <= 97)
		{
			printf("%lu, ", fib1);

			fib_sum = fib1 + fib2;
			fib1 = fib2;
			fib2 = fib_sum;
		}
		else
		{
			printf("%lu\n", fib1);
		}
	}
	return (0);
}

