#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string
 * @s: parameter for checking length of a string
 * Return: Always string length.
 */
int _strlen_recursion(char *s)
{
	int strlen = 0;

	if (*s)
	{
		strlen++;
		strlen += _strlen_recursion(s + 1);
	}
	return (strlen);
}
