#include <stdio.h>
/**
 * main - print the alphabet in lowercase and in uppercase
 *
 * Return: is 0
 */

int main(void)
{
	char low;

	for (low = 'a'; low <= 'z' ; low++)
	{
		if (low != 'q' && low != 'e')
			putchar(low);
	}
	putchar('\n');

	return (0);
}
