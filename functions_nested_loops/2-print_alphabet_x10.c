#include "main.h"
/**
 * print_alphabet_x10 - Print the alphabet in lower case x10
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 0; i <= 9; i++)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}
}
