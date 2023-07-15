#include <stdio.h>

/**
 * main - start
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i;
	char Y;

	for (i = 0; i < 10; i++)
		putchar((i % 10) + '0');

	for (Y = 'a'; Y <= 'f'; Y++)
		putchar(Y);

	putchar('\n');

	return (0);
}
