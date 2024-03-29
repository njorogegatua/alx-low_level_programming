#include "main.h"

/**
 * print_sign - prints the sign of a no
 * @n: the int to check
 * Return: 1 and prints + is n is greater than zero
 * 0 and prints 0 if n is zero
 * -1 and prints -1 if n is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
	}
		return (-1);
}
