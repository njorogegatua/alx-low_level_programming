#include "main.h"

/**
 * get_endianness - checks endianness
 *
 * Return: 0 if its big endian, 1 if its little endian
 */

int get_endianness(void)
{
	unsigned int x;
	char *c;

	x = 1;
	c = (char *) &x;

	return ((int)*c);
}
