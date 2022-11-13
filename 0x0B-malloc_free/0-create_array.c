#include "main.h"

/**
 * *create_array - creates an array of chars, & initializes with char.
 * @size: number of elements in array
 * @c: char
 * Return: pointer to array, NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int position;

	if (size == 0)
{
	return (NULL);
}
	buffer = malloc(size * sizeof(C));

	if (buffer == 0)
{
	return (NULL);
}
	else
{
	position = 0;
	while (position < size)
{
	buffer[position] = c;
	position++;
}
	return (buffer);
}
}
