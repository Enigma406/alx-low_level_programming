#include "main.h"

/**
 * times_table -  prints the 9 times table.
 */

void times_table(void)
{
	int x, y, k;

	for (x = 0; x <= 9; x++)
{
	for (y = 1; y <= 9; y++)
{
	k = x * y;

	if (y == 0)
	_putchar(k + '0');

	if (y != 0 && k <= 9)
{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar(k + '0');
}
	else if (k > 9)
{
	_putchar(',');
	_putchar(' ');
	_putchar((k / 10) + '0');
	_putchar((k % 10) + '0');
}
}
	_putchar('\n');
}

}
