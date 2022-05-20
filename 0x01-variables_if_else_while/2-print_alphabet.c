/**
 *A program that prints the alphabet in lowercase, followed by a new line using the putchar function 
 *All code is in the main function
 *I have only used the putchar function twice
 */

#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success/correct)
 */

int main(void)
{
int c;

for (c = 0; c < 26; ++c)
putchar('a' + c);

putchar('\n');

return (0);
}
