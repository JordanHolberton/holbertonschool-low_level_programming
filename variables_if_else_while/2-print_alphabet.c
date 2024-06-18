#include <stdio.h>
/**
 * main - print the alphabet in lower case
 *
 * Return: is 0
 */

int main(void)
{
	char low;

	for (low = 'a'; low <= 'z' ; low++)
		putchar(low);
	putchar('\n');
	return (0);
}
