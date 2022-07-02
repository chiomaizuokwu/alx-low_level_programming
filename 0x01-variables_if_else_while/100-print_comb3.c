#include <stdio.h>
/**
 *  main - Prints all possible different combinations of two digits
 *  Return: Always (0) success
 */
int main(void)
{
	int digit 1, digit 2;

	for (digit 1 = '0'; digit 1 <= '9'; digit 1++)
	{
		for (digit 2 = '0'; digit 2 <= '9'; digit 2++)
		{
			if (digit 1 < digit 2)
			{
				putchar(digit 1);
				putchar(digit 2);
				if (digit 1 != '8' || (digit 1 == '8' && digit 2 != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
