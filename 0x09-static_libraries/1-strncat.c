#include "main.h"
/**
 * _strncat - Function that concatenates two strings.
 * @dest: The destination of the string.
 * @src: The source of string.
 * @n: The number of bytes.
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{

	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
	{

		continue;
	}
	for (b = 0; src[b] != '\0' && b < n; b++)
	{
		dest[a + b] = src[b];
	}
	dest[a + b] = '\0';
	return (dest);
}
