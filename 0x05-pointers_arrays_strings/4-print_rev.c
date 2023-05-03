#include "main.h"
#include "string.h"
/**
 * print_rev - Prints a string in reverse
 * @s : the string to be printed
 */

void print_rev(char *S)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
