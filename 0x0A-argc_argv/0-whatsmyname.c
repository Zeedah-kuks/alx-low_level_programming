#include <stdio.h>
#include "main.h"
/**
 * main - print the name of the prog, followed by a new line
 * @argc: number of commamd line arguments
 * @argv: array of arguments
 * Return: (0) Success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
