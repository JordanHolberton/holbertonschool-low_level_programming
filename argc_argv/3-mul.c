#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 1 if it's an error, 0 if there is 2 numbers
 */

int main(int argc, char *argv[])
{
	int result, num1, num2;
	int i = atoi(argv[1]);
	int j = atoi(argv[2]);

		if (argc == 2)
		{
			printf("ERROR\n");
			return (1);
		}
			num1 = i;
			num2 = j;
			result = num1 * num2;

			printf("%d\n", result);

		return (0);
}
