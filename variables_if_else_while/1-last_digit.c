#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %i is ", n);
	last_digit = n % 10;
	if (last_digit > 5)
		printf("%i and is greater than 5\n", last_digit);
	else if (last_digit == 0)
		printf("%i and is 0\n", last_digit);
	else
		printf("%i and is less than 6 and not 0\n", last_digit);
	return (0);
}
