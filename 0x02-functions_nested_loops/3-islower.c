#include "main.h"

/**
 * _islower - checks if char c is in lowercase
 * @c: is the character to be checked
 * Return: 1 if char is lowercase, otherwise 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
