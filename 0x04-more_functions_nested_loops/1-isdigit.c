#include "main.h"
/**
 * _isdigit - function that checks for digit.
 * @dgt: the int for the paramaters of my function
 * Return: 1 for digit and  0 for anything else
 */
int _isdigit(int dgt)
{
	if (dgt >= 48 && dgt <= 57)
	{
	return (1);
	}
	else
	return (0);
}
