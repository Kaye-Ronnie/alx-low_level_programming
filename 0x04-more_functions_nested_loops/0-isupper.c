#include "main.h"
/**
 * _isupper - function that checks for uppercase character.
 * @ch: the int for the paramaters of my function
 * Return: 1 for upper case and anything else 0
 */
int _isupper(int ch)
{
	if (ch >= 65 && ch <= 90)
	{
		return (1);
	}
	else
		return (0);
}
