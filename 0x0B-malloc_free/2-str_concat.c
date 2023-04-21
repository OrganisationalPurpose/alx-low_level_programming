#include "main.h"
/**
 * str_concat - concatenates two string
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the concatenation (Success) or NULL (Fail)
 * Author: IanoNjuguna
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int size;
	char *concat_str;
	char *arr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size = strlen(s1) + strlen(s2) + 1;
	concat_str = (char *) malloc(sizeof(char) * size);
/*	arr = (char *) malloc(sizeof(char) * size);*/


	if (size == 0 || concat_str == NULL)
		return (NULL);

	strcpy(concat_str, s1);
	strcat(concat_str, s2);

/*	if (arr == NULL)
	{
		free(concat_str);
		return (NULL);
	}

	strcpy(arr, concat_str);

	free(concat_str);*/

	return (concat_str);
}
