#include <stdio.h>
/**
 * main - list all possible size type
 *
 * Return: Do nothing
 */
int main (void){
	int a;
	float b;
	double c;
	char d;

	printf("Size of int: %zu bytes\n", sizeof(a));
	printf("Size of float: %zu bytes\n", sizeof(b));
	printf("Size of double: %zu bytes\n", sizeof(c));
	printf("Size of char: %zu byte\n", sizeof(d));
	return (0);
}
