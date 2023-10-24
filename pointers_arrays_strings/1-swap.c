#include "main.h"

/**
 * swap_int - check code the swap in c
 *@a:number is value 1
 *@b:number IS value 2
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{

	int temporaire;

	temporaire = *a;
	*a = *b;

	*b = temporaire;
}
