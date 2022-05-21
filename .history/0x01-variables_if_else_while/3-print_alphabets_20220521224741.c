/**
 * I only used the putchar function
 * All code should is in the main function 
 * I used putchar three times in my code
 */

#include <stdio.h>

/**
 *main - Entry point
 *
 *Description: Print lower and upper alphabet on the same line
 *Return: 0
 */

int main(void)
{
int c;

for (c = 0; c < 26; ++c)
putchar('a' + c);
for (c = 0; c < 26; ++c)
putchar('A' + c);

putchar('\n');

return (0);
}
