#include "main.h"
#include <stdio.h>
/**
 * _abs - function that computes the absolute value of an integer
 * @num:  is the int that will use for the argument of the function
 * Return: 0
 */
int _abs(int num)
{
	if (num < 0)
	{
	return (num * -1);
	}
	else
	return (num);
}
