#include <stdio.h>
/**
 * main - print all number at 1 to 100
 * add Fizz when its a multiple of 3, Buzz multiple of 5
 * FizzBuzz when it's multiple of 3 and 5
 * Return: always 0
 */

int main(void)
{
	int i;
	{
		for (i = 1; i <= 100; i++)
		{
			if (i % 3 == 0 && i % 5 == 0)
			{
				printf(" FizzBuzz");
			}
			else if (i % 5 == 0)
			{
				printf(" Buzz");
			}
			else if (i % 3 == 0)
			{
				printf(" Fizz");
			}
			else if	(i == 1)
			{
				printf("%d", i);
			}
			else
			{
				printf(" %d", i);
			}
		}
		printf("\n");
	}
	return (0);
}
