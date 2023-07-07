#include "main.h"

/*
 * lip_bits - counts the numbwer of bits to change
 * to get from one number to next
 * @n : first number
 * @m : second number
 *
 * Return : number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63;
			i >= 0;
			i--
	    )
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}
	return (count);
}
