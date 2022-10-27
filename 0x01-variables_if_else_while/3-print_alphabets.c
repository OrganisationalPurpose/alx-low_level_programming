# include <stdio.h>

/**
 * main - Entry point
 * Description: Print lower and upper alphabet on the same line
 * Return: 0
 * Author: IanoNjuguna
 */

int main(void)
{
char z = 'a';
char Z = 'A';

while (z <= 'z')
{
	putchar(z);
	z++;
}
while (Z <= 'Z')
{
	putchar(Z);
	Z++;
}
putchar('\n');
return (0);
}
