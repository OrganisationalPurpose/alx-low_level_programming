#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all arguuments passed to it, followed by a new line.
 * @argc: counter
 * @argv: vector
 * Return: Always (0)
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
