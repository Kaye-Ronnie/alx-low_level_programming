#include "main.h"
/**
 * _isalpha - function to check if ch is a letter, lowercase or uppercase
 * @ch:is the int that will use for the argument of the function
 * Return: 0
 */
int _isalpha(int ch)
{
	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
	{
	return (1);
	}
	else
	return (0);
}
