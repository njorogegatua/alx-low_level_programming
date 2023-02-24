#include "main.h"

/**
 * _isupper - checks if a letter is in the uppercase
 * @c: is the letter to be checked
 *
 * Return: 1 for the uppercase letter otherwise 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{ return (1);
	}
	return (0);
}
