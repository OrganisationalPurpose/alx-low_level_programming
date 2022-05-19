/**
 *A C program that prints exactly;"and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.
 *
 * Not allowed to use any functions listed in the NAME section of the man (3) printf or man (3) puts
 *
 * Program should return 1
 *
 * Program should compile without any warnings when using the -Wall gcc option
 */

#include <stdio.h>
#include <unistd.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
			sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19"));
	return (1);
}
