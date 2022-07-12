#include "main.h"
#include <stdio.h>
/**
 * print_array - Function that prints n times the elements of an array
 * @x: the pointer to the elements
 * @n: the number of elements to be printed
 */
void print_array(int *x, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", x[i]);

		if (i < n - 1)
		{
			printf(", ");
		}
	}
	putchar('\n');
}
