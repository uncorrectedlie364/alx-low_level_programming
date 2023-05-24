#include "main.h"

/**
 * set_bit - Sets a bit at a given index to 1
 * @n : pointer to the number to change
 * @index : index to the bit set to 1
 * Return : 1 (Succcess), -1 (Failure)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (1);

	*n = ((1UL << index) | *n);
	return (1);
}
