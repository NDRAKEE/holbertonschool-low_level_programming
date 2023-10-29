#include <stdio.h>

/**
 * print_array - show string pointed
 * @b: string  to print
 * @w: Number to print
 * Return: void
 */
void print_array(int *b, int w)
{
	int r;

	for (r = 0; r < w; r++)
	{
		printf("%d", b[r]);
		if (r < w - 1)
		{
			printf(", ");
		}
	}

	putchar('\n');
}
