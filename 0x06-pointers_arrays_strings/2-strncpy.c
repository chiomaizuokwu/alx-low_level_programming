#include "main.h"
/**
 * _strncpy - Function that copies a string.
 * @dest: The destination of the string.
 * @src: The source of the string.
 * @n: The number of bytes.
 * Return: A pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && *(src + x); x++)
	{
		*(dest + x) = *(src + x);
	}
	for (; x < n; x++)
	{
	*(dest + x) = '\0';
	}
	return (dest);
}
