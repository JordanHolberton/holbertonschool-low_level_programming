#include "main.h"
/**
 * print_square - Print a square, followed by a new line
 * @size: size of the square
 */
void print_square(int size)

{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < size)
				{
					_putchar('#');
				}
				else if (j == size)
				{
					_putchar('\n');
				}
			}
			_putchar('\n');
		}
	}
}
