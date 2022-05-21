/**
 *A program that prints all single digit numbers of base 10 starting from 0, followed by a new line.
 *All my code should is in the main function
 * 
 */

#include <stdio.h>

/**
 *main - Entry point
 *
 *Description: Print numbers 0 to 9 on one line
 *Return: 0
 */

int main(void)
{
char i;

for (i = '0'; i <= '9'; ++i)
putchar(i);

putchar('\n');

return (0);
}
