#include "main.h"
/**
 * factorial - calculates the factorial of a number
 * @n: thenumber of factorial
 *
 * Return: integer value
 *
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
