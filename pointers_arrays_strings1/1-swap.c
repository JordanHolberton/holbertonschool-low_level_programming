#include "main.h"
/**
 * swap_int - swap two integers
 * @a: first integer
 * @b: second integer
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
