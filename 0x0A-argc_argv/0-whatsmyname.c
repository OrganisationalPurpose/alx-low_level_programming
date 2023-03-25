#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints its name, followed by a new line
 *
 * @argc: number of arguments passed
 * @argv: array of arguments passed
 *
 * Return: EXIT_SUCCESS
 * aUTHOR: IanoNjuguna
 */

int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", *argv);

	exit(EXIT_SUCCESS);
}

