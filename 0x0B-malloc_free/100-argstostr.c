#include "main.h"
/**
 * *argstostr - concatenates all the arguments of your program
 *
 * @ac: argument count
 * @av: argument vector
 *
 * Return: NULL (Fail) or pointer to a new string (Success)
 */
char *argstostr(int ac, char **av)
{
	unsigned int size = 0, i, j, k = 0;
	char *concat_arg;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < (unsigned int) ac; j++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			size++;
		size++;
	}

	concat_arg = malloc(sizeof(char) * size);
	if (concat_arg == NULL)
		return (NULL);

	for (i = 0; i < (unsigned int)ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			concat_arg[k++] = '\n';
	}
	concat_arg[k] = '\0';

	return (concat_arg);
}
