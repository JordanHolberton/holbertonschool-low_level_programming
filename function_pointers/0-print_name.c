#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - print a name
 * @name: Name to print
 * @f: pointer to the printing function
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
