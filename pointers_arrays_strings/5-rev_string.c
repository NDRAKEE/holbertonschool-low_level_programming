#include "main.h"

/**
 * rev_string - Reverses a
 * @s: The len to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int len = 0, a;
	char rev;

	while (*(s + len) != '\0')
	{
		len++;
	}

	for (a = 0; a < len; a++)
	{
		rev = *(s + a);
		*(s + a) = *(s + len - 1);
		*(s + len - 1) = rev;
	}	len--;
}

