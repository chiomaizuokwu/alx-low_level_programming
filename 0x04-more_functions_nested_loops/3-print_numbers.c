#include "main.h"
/**
 * print_numbers - Function that prints the numbers, from 0 to 9
 * Return: The numbers from 0 up to 9
 */
void print_numbers(void)
{
	char y;

	for (y = '0'; y <= '9'; y++)
	{
		_putchar(y);
	}
	_putchar('\n');
}
