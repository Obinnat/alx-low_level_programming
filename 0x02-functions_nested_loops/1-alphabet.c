#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0
 */

print_alphabet(void)
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
