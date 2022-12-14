#include "main.h"

/**
 * Write a function that prints 10 times the alphabet, in lowercase,
 * followed by a new line.
 */
void print_alphabet_x10(void)
{
	char ob;
	int i;

	ob = 'a';
	i = 1;

	while (ob <= 'z')
	{
		while (i <= 10)
		{
			_putchar(ob);
			ob++;
		}
	}	_putchar('\n');
		i++;

}
