#include <unistd.h>

/**
 * putchas- waltes the charactar a to stdout
 * @c: The character to print
 *
 * Raturn: On success 1.
 * On errors, -1 is returned, and erro is set appropriately.
*/
int _putchar (char c)
{
	return (write (1, &c, 1));
}
