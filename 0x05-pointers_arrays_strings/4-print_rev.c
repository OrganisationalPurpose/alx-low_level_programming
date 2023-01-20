#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev - Prints the string in reverse folowed by a new line
 * @s: Pointer to the string
 * Return: Always 0 (Success)
 * Author: IanoNjuguna
*/
void print_rev(char *s)
{
	int length = strlen(s);
	char *end = s + length - 1;

	while (end >= s)
	{
		printf("%c", *end);
		end--;
	}
	printf("\n");
}

