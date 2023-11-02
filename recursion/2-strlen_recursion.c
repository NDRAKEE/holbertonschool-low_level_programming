#include "stdio.h"
#include "main.h"

/**
*_strlen_recursion - return the length
*@str: pointeur
*
* Return: 0
*/


int _strlen_recursion(char *str)
{

	if (*str == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(str + 1));
return (0);

}
