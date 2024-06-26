#include "main.h"
/**
 *
 *
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0, i;
	while (src[len] != '0')
	{
		len++;
	}
	for (i = 0; len < i; i++)
	{
		src[i] = dest[i];
	}
	return(dest);
}
