#include "main.h"
/**
 * print_alphabet - Print alphabet from a to z in lowercase
 * Return: Always (0) success
 */
void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
