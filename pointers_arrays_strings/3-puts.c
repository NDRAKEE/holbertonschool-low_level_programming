#include "main.h"
#include <stdio.h>
/**
 * _puts - putchar caractere
 * @str: i putchar
*/
void _puts(char *str)
{
	int i  = 0;

	while (*str != '\0')
	{
		_putchar(*str);

		i++;
		str++;
	}
	_putchar('\n');
}
