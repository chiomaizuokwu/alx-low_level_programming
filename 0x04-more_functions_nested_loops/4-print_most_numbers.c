#include "main.h"
/**
 * print_most_numbers - Function that prints the nos, from 0 to 9 excluding 2&4
 * Return: The numbers from 0 to 9
 */
void print_most_numbers(void)
{
	char x;

	for (x = '0'; x <= '9'; x++)
	{
		if (!(x == '2' || x == '4'))
			_putchar(x);
	}
	_putchar('\n');
}
