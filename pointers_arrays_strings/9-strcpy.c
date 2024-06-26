#include "main.h"
/**
 * _strcpy - copy the string
 * @dest: string destination
 * @src: string to copy
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0, i;

	while (src[len] != '\0')
	{
		len++;
	}
	for (i = 0; len < i; i++)
	{
		src[i] = dest[i];
	}
	return (dest);
}
