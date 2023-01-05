#include "main.h"

/**
 * helper - function to loop eith new second variable
 * @n: int arg
 * @result: int arg
 * Return: sqaure root
 */
int helper(int n, int result)
{
	if (result * result == n)
	{
		return (result);
	}
	else if (result * result > n)
	{
		return (-1);
	}
	else
		return (helper(n, result + 1));
}
