#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints the number of arguments passed into it
 *
 * @argc: number of arguments passed to the program
 * @argv: array of arguments passed to the program
 *
 * Return: EXIT_SUCCESS
 * aUTHOR: IanoNjuguna
 */

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc = argc - 1);
	exit(EXIT_SUCCESS);
}

