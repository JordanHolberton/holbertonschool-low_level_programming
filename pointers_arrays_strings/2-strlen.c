#include "main.h"
/**
 * _strlen - return the lengh of a string
 * @s: string to calculate
 *
 * Return: Lenght of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
