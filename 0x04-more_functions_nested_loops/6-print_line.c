#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: the number of '_' to be printed
 * Return: 0
 */

void print_line(int n)
{
	int lngth;

	if (n <= 0)
	_putchar('\n');
{
	for (lngth = 0; lngth <= n; lngth++)
	_putchar('_');
}
	_putchar('\n');

}
