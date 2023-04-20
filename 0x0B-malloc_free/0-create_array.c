#include "main.h"
/**
 * create_array - creates an array of chars,
 *				  and initializes it with a specific char
 *
 * Return: pointer to the array (Success) or NULL (Fail)
 * Author: IanoNjuguna
 */
char *create_array(unsigned int size, char c)
{
	char *arr = (char *) malloc(sizeof(char) * size);
	unsigned int i;

	if (arr == NULL || size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}

