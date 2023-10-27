#include <stdio.h>

/**
 * main - Printf inverse letter
 * inverse letter
 *  Return: Always (Sucess)
 */
int main(void)
{
	char alphabet = 'z';

	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet--;

	}

	putchar('\n');

	return (0);

}

