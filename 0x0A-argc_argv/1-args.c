#include <stdio.h>
#include "main.h"
/**
 * main - prog that prints number of arg passed into it
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 * Return: Always (0) Success
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
