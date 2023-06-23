#include "main.h"
/**
 * print_line - print a straight line
 *
 * @n: is the number of times the - character
 *	should be printed
*/
void print_line(int n)
{
	int Inchr;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (Inchr = 1; Inchr <= n; Inchr++)
			_putchar('.');
		_putchar('\n');
	}
}
