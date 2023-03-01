#include <stdio.h>
#include <main.h>

/**
 * _strcat - Function that concatenates two strings
 * @dest: first string
 * @src: second string
 * Return: a string character
 */

char *_strcat(char *dest, char *src)
{
	int length, j;

	lenth = 0;

	whike (dest[length] != '\0')
	{
		length++;
	}
	for (j = 0; src[j] != '\0'; j++, length++)
	{
		dest[length] = src[j];
	}

	dest[lenth] = '\0';
	return (dest);
}
