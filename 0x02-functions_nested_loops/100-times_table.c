#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 *
 * @n: any integer between, and including 0 to 15
 *
 * Return: VOID
 * Author: IanoNjuguna
 */

void print_times_table(int n)
{
	int count1, count2; /* loop control variables */

	if (n < 0 || n > 15)
	{
		return;
	}

	for (count1 = 0; count1 <= n; count1++)
	{
		for (count2 = 0; count2 <= n; count2++)
			{
				printf("%2d", count1 * count2);

				if (count2 == n)
				{
					printf(" ");
				}
				else
				{
					printf(",");
				}
			}
			printf("\n");
		}
	printf("\n");
}

