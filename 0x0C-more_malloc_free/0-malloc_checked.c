#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - pointer to alllocate memory to
 * @b: memory to allocate
 *
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *f;

	f = malloc(b);
	if (f == NULL)
		exit(98);
	return (f);
}
