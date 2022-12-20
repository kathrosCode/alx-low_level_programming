#include "main.h"

/**
 * _puts - a function that prints a string
 * @str: string input
 * Return: string
 */
void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[i]);
		a++;
	}
	_putchar('\n');
}
