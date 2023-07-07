#include "main.h"

/*
 * clear_bit - stes the value of a given bit to 0
 * @n : points to the number to change
 * @index : index of the bit to be cleared
 *
 * Return : On uccess (1), on failure (-1)
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
