#include "main.h"

/**
 *_memcpy - copies the memory area
 * @dest: is  a pointer to char
 * @src:is the memory area
 * @n: an unsigned int
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
