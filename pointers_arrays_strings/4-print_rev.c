#include "main.h"

/**
 * print_rev - Prints in reverse
 * @s: The print  a inverse
 *
 * Return: void
 */

void print_rev(char *s)
{
	int len;
	int a = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}
	for (a = len - 1; a >= 0; a--)
	{
		_putchar(*(s + a));
	}
	_putchar('\n');
}
