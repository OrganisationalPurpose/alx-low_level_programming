#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *			 which contains a copy of the string given as a parameter.
 *
 * @str: an array of characters to be duplicated
 *
 * Return: pointer to a duplicated string (Success), or NULL (Fail)
 * Author: IanoNjuguna
 */
char *_strdup(char *str)
{
	unsigned int size;
	char *str0;

	if (str == NULL)
		return (NULL);

	size = strlen(str) + 1;
	str0 = (char *) malloc(sizeof(char) * size);



	if (str0 == NULL || size == 0)
		return (NULL);

	strcpy(str0, str);
	return (str0);
}
