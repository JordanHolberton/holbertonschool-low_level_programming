#include "main.h"

/**
 * _isalpha - check if char is in uppercase or lowercase
 *  @c : return 1 if c is in uppercase/lowercase or 0 if not
 *  Return: Always 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
