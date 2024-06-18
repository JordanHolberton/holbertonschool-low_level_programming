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
		putchar(low);
	for (low = 'A'; low <= 'Z' ; low++)
		putchar(low);
	putchar('\n');

	return (0);
}
