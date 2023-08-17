#include "main.h"
/**
 * _isalpha - Checks for alphabetic order
 *
 * @d: alphabet to be checked for
 *
 * Return: 1 if d is a letter, 0 otherwise
 */
int _isalpha(int d)
{
	return ((d >= 'a' && d <= 'z') || (d >= 'A' && d <= 'Z'));
}
