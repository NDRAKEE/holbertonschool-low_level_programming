#include "main.h"
#include "stdio.h"

/**
 * _print_rev_recursion -  string in reverse
 *
 * @s: pointeur
 *
 * Return: 0
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	else
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
