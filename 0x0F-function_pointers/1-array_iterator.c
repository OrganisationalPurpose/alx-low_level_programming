#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - execute a function
 * @array: array
 * @size: size
 * @action: action
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (*action == NULL)
	{
		return;
	}
	if (array == NULL)
	{
		return;
	}
		else
		{
		unsigned int i;

		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
		}
}
