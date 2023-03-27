#include "main.h"

/**
 * swap_int - swapping a and b
 * @a: first value to be swaped
 * @b: second value to be swaped
 *
 * Return:  always
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
