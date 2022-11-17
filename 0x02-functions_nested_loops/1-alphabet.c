#include "main.h"

/**
 * print_alphabet - Entry point
 * Description: print alphabet lowercase
 * Return: Void
 * Author: IanoNjuguna
 */

void print_alphabet(void)
{
char alphabet;

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
	_putchar(alphabet);
}

_putchar('\n');

}
