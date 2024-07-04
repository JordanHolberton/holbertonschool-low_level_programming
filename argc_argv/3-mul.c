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

		if (argc != 3)
		{
			printf("Error\n");
			return (1);
		}
			num1 = atoi(argv[1]);
			num2 = atoi(argv[2]);
			result = num1 * num2;

			printf("%d\n", result);

		return (0);
}
