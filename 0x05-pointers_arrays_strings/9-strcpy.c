#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * char *_strcpy - copies a string from a pointer
 * @src: Source of the string
 * @dest: Destination of the string.
 *
 * Return: @dest
 * Author: IanoNjuguna
 */
char *_strcpy(char *dest, char *src)
{
	unsigned int i;
	unsigned int len = strlen(src);

	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
