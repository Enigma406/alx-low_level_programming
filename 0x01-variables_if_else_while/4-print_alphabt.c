#include <stdio.h>

/**
 * main - Entry
 * Description: a program that prints the alphabet in lowercase
 * except q and e followed by a new line.
 * Return: 0
 */

int main(void)
{
	char c;

	(c = 'a');
	while (c <= 'z')
{
	if ((c != 'q' && c != 'e') && c <= 'z')
	putchar(c);
	c++;
}
{
	putchar('\n');
}
	return (0);
}
