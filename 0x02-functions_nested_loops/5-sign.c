#include "main.h"
/**
 * print_sign - function that prints the sign of a number
 * @nos:  the num to be checked
 * Return: 1 for positive num, -1 for negative and 0 for anything else
 */
int print_sign(int nos)
{
	if (nos > 0)
	{
	_putchar('+');
	return (1);
}
	else if (nos < 0)
	{
	_putchar('-');
	return (-1);
	}
	else
	{
	_putchar('0');
	return (0);
	}
}

