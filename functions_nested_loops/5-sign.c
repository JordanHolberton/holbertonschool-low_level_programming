#include "main.h"
/**
 * print_sign - Script for print number
 * @n : return + if greater than 0, 0 if equal to 0 and - if lesser than 0
 * Return: 1 if greater 0 if equal to 0 and -1 if lesser than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
			return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
			return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}

}
