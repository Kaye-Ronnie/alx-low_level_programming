#include "main.h"

/**
 * _islower - function to check for lowercase character
 * @ch:  is the int that will use for the argument of the function
 * Return: 0
 */
int _islower(int ch)
{
	if (ch >= 97 && ch <= 122)
	{
		return (1);
	}
	return (0);
}
