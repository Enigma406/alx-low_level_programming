#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments
 * @argc: counts arguments
 * @argv: arguments vector
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%i\n", argc - 1);

	return (0);
}
