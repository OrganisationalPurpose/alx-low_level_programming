/**
 *A program that prints the alphabet in lowercase, followed by a new line
 * - Prints all the letters except q and e
 * - I only use the putchar function 
 * - All my code should is in the main function
 * - I only used putchar twice in your code
 * 
 */

#include <stdio.h>

/**
 *main - Entry point
 *
 *Description: Print lowercase alphabet excluding e and q
 *Return: 0
 */

int main(void)
{
char c;

for (c = 'a'; c <= 'z'; ++c)
{
if (c != 'e' && c != 'q')
putchar(c);
}

putchar('\n');

return (0);
}
