#include "main.h"
#include <stdio.h>
/**
 * swap_int - swaps the values of two integers
 *
 * @a: pointer to the first integer
 * @b: pointer to the second integer
 * Return: Always 0 (Success)
 * Author: IanoNjuguna
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

