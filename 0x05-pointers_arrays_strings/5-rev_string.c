#include "main.h"

/**
 * rev_string - reverses a string
 * @str: string to be processed
 */

int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}
