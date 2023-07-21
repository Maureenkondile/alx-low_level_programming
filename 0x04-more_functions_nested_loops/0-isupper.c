#include <stdio.h>
#include "main.h"

/**
 * _isupper - check if character is uppercase
 * @c: variable text
 * Return: 0. (Success)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
