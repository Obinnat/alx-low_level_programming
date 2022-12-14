#include "main.h"

/**
 *print_alphabet - print alphabet
 *
 */

void print_alphabet(void)
{
	char ob;

	ob = 'a';

	while (ob <= 'z')
	{
		_putchar(ob);
		ob++;
	}
	_putchar('\n');
}
