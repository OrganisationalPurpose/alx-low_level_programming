#include "main.h"
#include <stdio.h>

/**
 * print_array- prints n elements of an array of integers
 * @a: Integer value holding the array
 * @n: Number of elements of the array to be printed
 * Return: Always 0.
 * Author: IanoNjuguna
 */

void print_array(int *a, int n)
{
	int index = 0;

	while (index < n)
	{
		printf("%d", a[index]);

		if (index < (n - 1))
		{
			printf(", ");
		}
		index++;
	}

	printf("\n");
}

