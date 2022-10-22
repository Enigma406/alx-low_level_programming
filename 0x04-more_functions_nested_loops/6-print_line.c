#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: the number of '_' to be printed
 * Return: 0
 */

void print_line(int n)
{
	int l;

	if (n > 0)
{
	for (l = 0; l <= n; l++)
	_putchar('_');
}
	else
{
	_putchar('\n');
}
	_putchar('\n');

}
