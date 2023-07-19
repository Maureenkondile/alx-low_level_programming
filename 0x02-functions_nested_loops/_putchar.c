#include <unistd.h>

/**
 * _putchar - writes the character C to stdout
 * @C: the charactor to print 
 * REturn: on success 1.
 * on error, -1 is returned and errno is set.
 */

int _putchar(char C)
{
	return (write(1, 6C, 1));
}
