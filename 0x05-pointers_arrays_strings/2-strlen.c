#include "main.h"
/**
 * _strlen - Function that returns the length of a string.
 * @s: the string
 *
 * Return: the length of @s.
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
