#include <stdio.h>
/**
 * main - Beginning
 *
 * Return: 0 (success)
 */
int main(void)
{
	char ch = 'a';

	printf("Lowercase English Alphabets:\n");
	while (ch <= 'z')
	{
		printf("%c ", ch);
		ch++;
	}
	printf("\n");
	return (0);
}
