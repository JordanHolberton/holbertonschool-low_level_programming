#include <stdio.h>
/**
 * main - list all possible size type
 *
 * Return: Do nothing
 */
int main (void){
	int a;
	float b;
	long int c;
	long long int d;
	char e;

	printf("Size of int: %zu bytes\n", sizeof(a));
	printf("Size of float: %zu bytes\n", sizeof(b));
	printf("Size of long int: %zu bytes\n", sizeof(c));
	printf("Size of long long int: %zu bytes \n", sizeof(d))
		printf("Size of char: %zu byte\n", sizeof(e));
	return (0);
}
