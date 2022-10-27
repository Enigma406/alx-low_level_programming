#include "main.h"

/**
 * *_strcat - concatenates two strings.
 * @src: source string
 * @dest: destination string
 * Return: string
 */
char *_strcat(char *dest, char *src)
{
	int len = 0;

	while (*(src + len) != '\0')
{
	("strcat( *(dest + len), *(src + len): %s\n", dest);
}
	*(dest + len) = '\0';
	return (dest);

}
