#include "main.h"
/**
 * _isalpha - function that checks for alphabetic character
 * @x: The character to be checked
 * Return: 1 for alphabetic character or 0 for anything else
 */
int _isalpha(int x)
{
	if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'))
	{
	return (1);
	}
	else
	return (0);
}
