#include <stdio.h>
#include "main.h"
/**
 * main - prog that prints all arguments it receives
 * @argc: num of command line arguments
 * @argv: array of command line arguments
 * Return: Always (0) Success
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
