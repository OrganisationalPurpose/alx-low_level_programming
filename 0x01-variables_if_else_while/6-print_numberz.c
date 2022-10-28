#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: Print numbers 0 to 9 followed by a newline
 * Return: Always 0 (Success)
 * Author: IanoNjuguna
 */

int main(void)
{
int i;
i = 0;

while (i <= 9)
{
	putchar(i);
	i++;
}
putchar('\n');
return (0);
}
