#include "main.h"
/**
 * print_alphabet_x10- function that prints 10 times the alphabet,in lowercase
 * followed by a new line.
 */

void print_alphabet_x10(void)
{
	int n, m;

	n = 0;

	while (n < 10)
	{
		m = 'a';
		while (m <= 'z')
		{
			_putchar(m);
			m++;
		}
		_putchar('\n');
		n++;
	}
}
