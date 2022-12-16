#include "main.h"

/**
 * print_most_numbers - Prints numbers except 2 and 4
 *
 *
 * Return: return nothing
 */
void print_most_numbers(void)
{
int number;
for (digits = 48; digits <= 58; number++)
{


if ((number == 50) || (number == 52))

{
continue;
}
_putchar(number);
}
_putchar(10);
}
