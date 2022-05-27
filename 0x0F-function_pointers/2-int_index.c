#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - search for integer.
 * @array: array
 * @size: size
 * @cmp: cmp
 * Return: nothing.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL)
	{
		return (-1);
	}
	if (array == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
