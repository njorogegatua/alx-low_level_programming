#include "main.h"
#define NULL 0

/**
 * _strchr - locates a character ina string
 * @s:   a pointer to a character
 * @c:  a character
 * Return: char
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
		i++;
	}
	if (c == '\0')
	{
		return (s + i);
	}
	return (NULL);
}
