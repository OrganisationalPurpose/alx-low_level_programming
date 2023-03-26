#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two integers
 *
 * @argc: number of arguments passed to the program
 * @argv: array of arguments passed to the program
 *
 * Return: EXIT_SUCCESS
 * Author: IanoNjuguna
 */

int main(int argc, char *argv[])
{
	while (argc > 1)
	{
		int arg1, arg2, result;

		arg1 = atoi(argv[1]);
		arg2 = atoi(argv[2]);
		result = arg1 * arg2;

		printf("%d\n", result);
		return (0);
	}

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	exit(EXIT_SUCCESS);
}
