#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be searched.
 * @accept: The prefix to be measured.
 * Return: n bytes in s consisting bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int c;

	while (*s)
{
	for (c = 0; accept[c]; c++)
{
	if (*s == accept[c])
{
	bytes++;
	break;
}
	else if (accept[c + 1] == '\0')
	return (bytes);
}
	s++;
}
	return (bytes);
}
