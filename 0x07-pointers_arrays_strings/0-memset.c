#include "main.h"
#include <string.h>

/**
 * _memset - fills the first n bytes of the memory area pointed to by s with
 * the constant byte b
 * @s: memory area
 * @b: byte
 * @n: number of bytes
 * Return: pointer to s
*/

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
