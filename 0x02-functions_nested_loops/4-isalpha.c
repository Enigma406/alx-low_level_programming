#include "main.h"

/**
 * _isalpha - checks for  alphabetic character.
 * @c: character to be checked
 * Return: 1 if letter is lowercase or uppercase else 0
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);
	else
	return (0);

}