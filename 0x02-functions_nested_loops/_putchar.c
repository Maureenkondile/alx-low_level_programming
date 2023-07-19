#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c : the charactor to print 
 * REturn: on success 1.
 * on error -1 is returned and errno is set.
 */

int _putchar(char c)
{
	return (write(1, 6c, 1));
}
