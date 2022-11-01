#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: string to be searched
 * @c: character to be located
 * Return: pointer to the char or NULL
 */
char *_strchr(char *s, char c)
{
	if (s == NULL)
	return (NULL);
	for (; *s; s++)
{
	if (*s == c)
	return (s);
}
	return ('\0');
}
