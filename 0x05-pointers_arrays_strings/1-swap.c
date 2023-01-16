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

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int a;
    int b;

    a = 98;
    b = 42;
    printf("a=%d, b=%d\n", a, b);
    swap_int(&a, &b);
    printf("a=%d, b=%d\n", a, b);
    return (0);
}
