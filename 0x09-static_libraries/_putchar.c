#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character z to stdout
 * @z: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */
int _putchar(char z)
{
	return (write(1, &z, 1));
}
