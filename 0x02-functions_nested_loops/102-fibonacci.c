#include <stdio.h>
/**
 * main - prints first 50 Fibonacci numbers, starting with 1 and 2.
 *
 * Return: Always 0 (Success)
 * Author: IanoNjuguna
 */

int main(void)
{
	long int i = 1;
	long int j = 2;
	long int temp;
	long int sequence = 1;

	for (sequence = 0; sequence <= 49; sequence++)
	{
		if (sequence < 48)
		{
			printf("%ld, ", i);

			temp = i + j;
			i = j;
			j = temp;
		}
		else
		{
			printf("%ld\n", i);
		}
	}
	return (0);
}

