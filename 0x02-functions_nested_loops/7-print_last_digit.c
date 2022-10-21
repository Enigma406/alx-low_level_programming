#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: The number in question
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	int ld;

	if (n <= 0)
	n = -n;
	ld = n % 10;
	_putchar(ld + '0');

	return (ld);

}
