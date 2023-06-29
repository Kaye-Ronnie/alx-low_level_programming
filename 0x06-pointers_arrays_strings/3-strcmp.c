#include "main.h"
/**
 * _strcmp - function that compares two strings.
 * @s1: ointers to first string
 * @s2: pointers to second string
 * Return: value less or greater than, print below or above 0
 */
int _strcmp(char *s1, char *s2)
{
	int counter, comp_value;

	counter = 0;
	while (s1[counter] == s2[counter] && s1[counter] != '\0')
	{
		counter++;
	}
	comp_value = s1[counter] - s2[counter];
	return (comp_value);
}
