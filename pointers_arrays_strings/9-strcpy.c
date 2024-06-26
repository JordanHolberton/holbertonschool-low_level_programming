#include "main.h"
/**
 * _strcpy - copy the string
 * @dest: string destination
 * @src: string to copy
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i < src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
