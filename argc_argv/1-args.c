#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argc;
	argv[0] = argv[0];
	printf("%d\n", argc - 1);
	return (0);
}
