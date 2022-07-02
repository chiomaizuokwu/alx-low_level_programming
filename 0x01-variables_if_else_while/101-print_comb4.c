#include <stdio.h>
/**
 *  main - Prints all possible different combinations of three digits
 *  Return: Always (0) success
 */
int main(void)
{
	int x1, x2, x3;

	for (x1 = '0'; x1 <= '9'; x1++)
	{
		for (x2 = '0'; x2 <= '9'; x2++)
		{
			for (x3 = '0'; x3 <= '9'; x3++)
			{
				if (x1 < x2 && x2 < x3)
				{
					putchar(x1);
					putchar(x2);
					putchar(x3);
					if (x1 != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
