#include "main.h"
/**
 * print_rev - Function that prints a string, in reverse,followed by a new line
 * @str: the string to be printed
 * Return: string in reverse
 */
void print_rev(char *str)
{
	int i = 0;

	while (str[i] != 0)
	{
		i++;
	}
	while (i > 0)
	{
		i--;
		_putchar(str[i]);
	}
	_putchar('\n');
}
