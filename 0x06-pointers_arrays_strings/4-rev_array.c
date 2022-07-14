#include "main.h"
/**
 * _reverse_array - Function that reverses the content of an array of integers.
 * @a: The arrays of integers to be reversed
 * @n: The number of element in the array
 * Return: Empty
 */
void _reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
