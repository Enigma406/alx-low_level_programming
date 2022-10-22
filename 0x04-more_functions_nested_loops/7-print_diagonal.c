#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: the integer parameter
 */
void print_diagonal(int n)
{
	if (n <= 0)
	_putchar('\n');
else
{
	int x, i;

	for (x = 0; x < n; x++)
{
	for (i = 0, i < x; i++)
	_putchar('\');
	_putchar('\n');
}
}
}
