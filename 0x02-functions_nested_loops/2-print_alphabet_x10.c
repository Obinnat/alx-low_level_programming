#include "main.h"
/**
 * print_alphabet - a function that prints 10 times the alphabet, in lowercase,
 * followed by a new line.
 */

void print_alphabet_x10 (void)
{
	char ob;
	int i;

	i = 1;

	while (i <= 10)
	{
		ob = 'a';
		while (i <= 'z')
		{
			_putchar(ob);
			ob++;
		}
	}	_putchar('\n');
		i++;

}
