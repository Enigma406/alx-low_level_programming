#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: the number of '\' to be printed
 * Return: 0
 */

void print_diagonal(int n)
{
	int d;

	if (n <= 0)
	_putchar('\n');
	for (d = 0; d < n; d++)
{
	for (c = 0; c < d; c++)
	_putchar(' ');
	_putchar('\');
	_putchar('\n');
}

}
