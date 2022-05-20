/**
 * A program will assign a random number to the variable (n) each time it is executed whether the number stored in the variable (n) is positive or negative.
 * The variable n stores a different value every time this program is run
 * The output of the program should be:
     The number, followed by:
     -If the number is greater than 0: is positive
     -If the number is 0: is zero
     -If the number is less than 0: is negative
     -A new line
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry
 *
 *Return: Always 0 (success/correct)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 1)
printf("%d is positive\n", n);
else if (n < 0)
printf("%d is negative\n", n);
else

printf("%d is zero\n", n);

return (0);
}
