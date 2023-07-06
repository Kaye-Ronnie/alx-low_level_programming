#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);

/**
 *  is_prime_number - func that returns 1 if a num is a prime num, 0 otherwise
 * @n: number for input
 * Return: 0
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}
/**
 * check_prime - check if number is prime
 * @n: number to be checked
 * @i: iterction times
 * Return: 1 for prime and zero for composite
 */
int check_prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n % 1 == 0 && i > 1)
	{
		return (0);
	}
	else if ((n / i) < i)
	{
		return (1);
	}
	else
	{
		return (check_prime(n , i + 1));
	}
}
