#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: The string to be searched.
 * @accept: The prefix to be measured.
 * Return: a pointer to the bytes or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	char c, *p;

	for (c = *s; c != 0; s++, c = *s)
{
	for (p = accept; *p != 0; p++)
{
	if (c == *p)
{
	return (s);
}
}
}
	return (0);
}
