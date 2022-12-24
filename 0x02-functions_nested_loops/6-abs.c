#include "main.h"
#include <stdio.h>
/**
 * _abs - Write a function that computes the absolute value of an integer.
 *@i: the int is check
 * Return: the abs value
 */
int _abs(int i)
{
	if (i < 1)
	{
		_putchar(i);
	}
	return (-i);
}

