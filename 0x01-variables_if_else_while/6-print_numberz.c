#include <stdio.h>
/**
 * main - All single digit numbers of base 10 starting from 0 use only putchar
 * Return: Always (0) success
 */
int main(void)
{
	int numbers;

	for (numbers = '0'; numbers <= '9'; numbers++)
	{
		putchar(numbers);
	}
	putchar('\n');
	return (0);
}
