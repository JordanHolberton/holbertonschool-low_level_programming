#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string
 * @s: string to capitalize
 * 
 * Return: s
 */

char *cap_string(char *s)
{
	int i, j;
	char separators[13] = " \t\n,;.!?\"(){}";


	for (i = 0; s[i] != '\0'; i++)
	{
		{
			for(j = 0; j < 12; j++)
			{
				if (s[i] == separators[j])
				{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
					s[i + 1] -= 32;
				}
			}
		}
	}
	return (s);
}
