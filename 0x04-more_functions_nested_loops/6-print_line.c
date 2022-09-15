#include "main.h"
#include <stdio.h>

/**
 * print_line - draws a strsaight line in the terminal
 * @n: number of times the character _is used
 * Return: 0
 */

void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
			_putchar('_');
	}
	_putchar('\n');
}
