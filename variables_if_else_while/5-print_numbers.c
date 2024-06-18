#include <stdio.h>
/**
 * main - Print number 0 --> 9
 *
 * Return: Value 0
 */
int main(void)
{
	char n;

	for (n = '0'; n <= '9' ; n++)
		putchar(n);
	putchar('\n');
	return (0);

}
