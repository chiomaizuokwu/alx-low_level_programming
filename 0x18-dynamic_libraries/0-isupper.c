#include "main.h"
/**
  * _isupper - Function that checks for uppercase character.
  * @x: The character to be checked
  * Return: 1 for upper letter or 0 for any else
  */
int _isupper(int x)

{
	if (x >= 'A' && x <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
