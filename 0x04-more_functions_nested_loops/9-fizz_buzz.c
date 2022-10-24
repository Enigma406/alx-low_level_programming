#include "main.h"
#include <stdio.h>
/**
 * fizz_buzz - prints numbers 1 to 100.
 * Return: 0
 */
void fizz_buzz(void)
{

	int n;

	printf("1");
	for (n = 2; n <= 100; n++)
{
	printf(" ");
	if (n % 3 == 0)
	printf("Fizz");
	else if (n % 5 == 0)
	printf("Buzz");
	else if (n % 3 == 0 && n % 5 == 0)
	printf("FizzBuzz");
	else
	printf("%d", n);
}
	printf("\n");
}
