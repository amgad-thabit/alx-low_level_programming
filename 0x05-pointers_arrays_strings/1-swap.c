#include "main.h"

/**
 * swap_int - two value
 *
 *
 * @a: input parameter 1
 * @b: input parameter 2
 *
 * return: Nothing
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
