#include "main.h"

/*
 * print_binary - prints the binary equivalent of the decimal number
 * @n : number to print(binary)
 */

void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int current;

	for  (i = 63;
			i >= 0;
			i--
	     )
	{
		current = n >> i;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		if (!count)
			_putchar('0');
	}
}