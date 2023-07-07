#include "main.h"

/*
 * set_bit - ste a bit at a given index to 1
 * @n : point to the number to change
 * @indx : index of the bit to set to 1
 *
 * Return : On success (1), on failure (-1)
 */

int set_bit(unsigned long int  *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
