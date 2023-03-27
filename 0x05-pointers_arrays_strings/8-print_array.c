#include "main.h"
#include <stdio.h>

/**
 * print_array - print array followed by a
 * new line
 * @a: array to print
 * @n: numbers of elements to print
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i < (n - 1))
			printf(", ");
		i++;
	}
	printf("\n");
}
