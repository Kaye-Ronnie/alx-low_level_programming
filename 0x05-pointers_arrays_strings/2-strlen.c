#include "main.h"

/**
 * _strlen - check the code for Holberton School students.
 * @s: declaration of *s and paramters for the function _strlen
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int strLength = 0;

	while(s[strLength])
	       strLength++;	
	return (strLength);
}
