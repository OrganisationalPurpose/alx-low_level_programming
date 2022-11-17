#include <stdio.h>
/**
 *main - Entry point
 *Description: Prints 3 combination of numbers
 *
 *Return: Always 0 (Success)
 *Author: IanoNjuguna
 */
int main(void)
{
	int a, b, x, z;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			for (x = 48; x <= 57; x++)
			{
				for (z = 48; z <= 57; z++)
				{
					if (((x + z) > (a + b) &&  x >= a) || a < __x86_64)
					{
						putchar(a);
						putchar(b);
						putchar(' ');
						putchar(x);
						putchar(z);
					if (a + b + x + z == 227 && a == 57)
					{
						break;
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
