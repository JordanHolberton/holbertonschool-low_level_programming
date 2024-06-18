#include <stdio.h>
/**
 * main - Print reverse alphabet
 *
 * Return: is 0
 */

int main(void)
{
	char low;

	for (low = 'z'; low >= 'a' ; low--)
		putchar(low);
	putchar('\n');
	return (0);
}
