#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of args  passed to it
 * @argc: argument count
 * @argv: arguments vector
 * Return: int
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
