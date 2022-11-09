#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @i: integer
 * @n: integer
 * Return: evaluated sqrt
 */
int _sqrt_recursion(int i, int n)
{
	if (n == 0 || n == 1)
	return (n);
	else if (i * i < n)
	return (_evaluate(i + 1, n));
	else if (i * i == n)
	return (i);
	return (-1);
}
