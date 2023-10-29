#include "main.h"
/**
 *puts_half - prints sting half
 *
 *@str: This is string half
 */
void puts_half(char *str)
{
	int a, half;

	a = 0;
	while (str[i] != '\0')
		a++;

	half = a / 2;

	if (a % 2 == 1)
		half++;

	while (half < a)
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}:
