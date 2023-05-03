#include "main.h"
/**
 * _puts - prints a string followed by a new line to stdout
 * @str : the string to print
 */

void _putchar(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
