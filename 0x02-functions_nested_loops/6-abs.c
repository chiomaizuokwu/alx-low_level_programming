#include "main.h"
#include <stdio.h>
/**
 * _abs - function that computes the absolute value of an integer
 * @x:  the number to be checked
 * Return: 0
 */
int _abs(int x)
{
	if (x > 0 || x == 0)
	{
	return (x);
	}
	else
	return (x * -1);
}
