#include <stdio.h>
/**
 * main - Prints all the numbers of base 16 in lowercase
 * Return: Always (0) success
 */
int main(void)
{
	int nums;
	char x;

	for (nums = '0'; nums <= '9'; nums++)
		putchar(nums);
	for (x = 'a'; x <= 'f'; x++)
		putchar(x);
	putchar('\n');
	return (0);
}
