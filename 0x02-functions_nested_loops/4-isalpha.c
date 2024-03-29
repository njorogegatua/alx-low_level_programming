#include "main.h"

/**
 * _isalpha - check for alphabetic character
 * @c: the character to be checked
 * Return: 1 is c is a letter, 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
