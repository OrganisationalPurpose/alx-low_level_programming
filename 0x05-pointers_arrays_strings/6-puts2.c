#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - prints every other character of a string followed by a new line
 * @str: Pointer to the string
 * Return: Always 0 (Success)
 * Author: IanoNjuguna
 */

void puts2(char *str)
{
	int length = strlen(str);
	char *end = str + length;

	while (str < end)
	{
		printf("%c", *str);
		str = str + 2;
	}

	printf("\n");
}

