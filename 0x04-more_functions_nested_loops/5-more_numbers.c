#include "main.h"

/**
 * more_numbers -  prints 10 times the numbers, 
 * followed by a new line.
 * Return: 0
 */

void more_numbers(void)
{
	int ten;
	int n;

	for (ten = 0; ten <= 9; ten++)
{
	for (n = '0'; n <= '14'; n++)
	_putchar(n);
	_putchar('\n');
}

}
