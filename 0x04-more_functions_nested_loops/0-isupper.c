#include "main.h"

/**
 * _isupper - Check if a letter is upper
 * @x: The number to be checked 
 * Return: give 1 or 0
 */
int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	return (0);
}
