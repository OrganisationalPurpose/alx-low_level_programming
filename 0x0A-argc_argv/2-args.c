#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all arguments it receives
 *
 * @argc: number of arguments passed
 * @argv: array of arguments passed
 *
 * Return: EXIT_SUCCESS
 */

int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv);
		argv++;
	}
	exit(EXIT_SUCCESS);
}

