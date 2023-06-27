#include "main.h"
/**
 * rev_string - function that reverses a string.
 * @s: declaration of *s and paramters for the function
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int length, z, half;
	char temp;

	for ( length = 0; s[length] != '\0'; length++)
		;
	z=0;
	half = length/z;
	while (half--)
	{
		temp =s[length-z-1];
		s[length-z-1]=s[z];
		s[z]=temp;
		z++;
	}
}
