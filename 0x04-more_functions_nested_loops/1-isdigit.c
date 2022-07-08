#include "main.h"
/**
 * _isdigit - Function that checks for a character that's digit
 * @c: character to be checked
 * Return: 1 for a character or 0 for anything else
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
