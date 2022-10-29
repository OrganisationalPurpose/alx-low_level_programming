#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: Print all single digit numbers of base 10
 * stating from 0, followed by a new line
 * Return: Always 0 (Success)
 * Author: IanoNjuguna
 */

int main(void)
{
char c;

for (c = '0'; c <= '9'; c++)
{
	putchar(c);

	if (c != '9')
	{
		putchar(',');
		putchar(' ');
	}
}
putchar('\n');
return (0);
}
