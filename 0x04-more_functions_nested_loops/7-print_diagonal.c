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
	else
{
	for (d = 0; d < n; d++)
	_putchar('\');
}
	_putchar('\n');

}
