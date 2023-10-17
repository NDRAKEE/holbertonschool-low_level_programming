#include <stdio.h>

/**
 * main - Prints
 * the alphabet a and z 
 *
 * Return: 0.
 */
int main (void
{
	char alphabet;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}

	 putchar('\n');

	 return (0);
}
