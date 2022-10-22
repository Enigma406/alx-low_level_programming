#include "main.h"

/**
 * more_numbers - prints 0 to 14 ten times
 * followed by a new line.
 * Return: 0
 */

void more_numbers(void)
{
	int ten;
	int n;

	for (ten = 0; ten <= 9; ten++)
{
	for (n = 0; n <= 14; n++)
{
	if (n > 9)
{
	_putchar((n / 10) + '0');
}
	_putchar((n % 10) + '0');
}
	_putchar('\n');
}

}
