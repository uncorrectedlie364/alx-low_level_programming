#include "main.h"
#include <unistd.h>

/**
 * *_putchar - Writes the char c to stdout
 * @c : The character to be printed
 * Return : 1 (On success) 
 * On error : -1 is returned and the errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
