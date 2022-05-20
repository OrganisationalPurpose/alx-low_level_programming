/**A program that assigns a random number to the variable (n) each time it is executed to print the last digit of the number stored in the variable (n).
 * The variable (n) will store a different value every time you run this program
 * The output of the program should be:
 *  - The string: `Last digit of`
 *  - Followed by (n)
 *  - Followed by the string: `is`
 *  - Followed by:
 *      - if the last digit of (n) is greater than 5: `the string and is greater than 5`
 *      - if the last digit of (n) is 0: the string: `and is 0`
 *      - if the last digit of (n) is less than 6 and not 0: the string: `and is less than 6 and not 0`
 *  - Followed by a new line
 */
 
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success/correct)
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

printf("Last digit of %d is %d %s\n", n, n % 10,
((n % 10) == 0) ? "and is 0"
: (((n % 10) > 5) ? "and is greater than 5"
: "and is less than 6 and not 0"));

return (0);
}
