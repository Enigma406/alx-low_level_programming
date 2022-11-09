#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: The string to be printed.
 */
void_print_rev_recursion(char *s)
{
	if (*s)
	s++;
	_print_rev_recursion(s + 1);
	s--;
	_putchar(*s);
}
