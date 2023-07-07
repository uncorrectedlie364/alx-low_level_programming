#include "main.h"

/*
 * get_endianness _ checks if the machine endian is big or small
 * Return : 0 for big, 1 for`:wq
 * small
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
