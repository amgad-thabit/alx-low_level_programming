#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	n = 402;

	int *ptr = &n;

	printf("n=%d\n", n);
	*ptr = 98;
	printf("n=%d\n", n);
	return (0);
}
