#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: string to be searched
 * @c: character to be located
 * Return: pointer to the char or NULL
 */
char *_strchr(char *s, char c)
{
	int b;

	for (b = 0; s[b] >= '\0'; b++)
{
	if (s[b] == c)
	return (s + b);
}
	return ('\0');
}
