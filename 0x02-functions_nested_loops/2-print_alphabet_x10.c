#include "main.h"

/**
 * print_alphabet_x10 - print 10 times alphabet, in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char pa;
	int p;

	p = 0;

	while (p < 10)
	{
		pa = 'a';
		while (pa <= 'z')
		{
			_putchar(pa);
			pa++;
		}
		_putchar('\n');
		p++;
	}
}
