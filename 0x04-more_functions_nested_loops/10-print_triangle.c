#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	if (size <= 0)
{
	_putchar('\n');
}
	else
{
	int a, b, c;

	for (a = 0; a < size; a++)
{
	for (b = 0; b != a && b < size; b++)
{
	for (c = 0; c != b && c < size; c++)
{
	_putchar('#');
}
	_putchar('\n');
}
}
}
}
