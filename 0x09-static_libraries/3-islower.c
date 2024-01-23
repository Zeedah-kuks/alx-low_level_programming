#include "main.h"

/**
 * _islower - This checks for lowercase alphabet
 * @g: The character to be checked
 * Return: If the character is lowercase, otherwise
 */

int _islower(int g)
{
	if (g >= 'a' && g <= 'z')
		return (1);
	else
		return (0);
}
