#include "main.h"
/**
 * print_line - Function that draws a straight line in the terminal.
 * @n: number of times
 * Return: void
 */
voi print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

