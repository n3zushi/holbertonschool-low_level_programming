/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 */

#include <unistd.h>

void _putchar(char c)
{
	write(1, &c, 1);
}
