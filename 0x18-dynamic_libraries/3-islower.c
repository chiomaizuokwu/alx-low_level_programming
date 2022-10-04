#include "main.h"
/**
 * _islower - Write a function that checks for lowercase character.
 * @x:  The character to be checked
 * Return: to 1 for lowercase character or 0 for anything else
 */
int _islower(int x)
{
	if (x >= 'a' && x <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
