#include "main.h"
/**
 * swap_int - Function that swaps the values of two integers.
 * @x: integer 1 to be swapped
 * @y: integer 2 to be swapped
 */
void swap_int(int *x, int *y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
