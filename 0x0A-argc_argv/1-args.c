#include <stdio.h>
/**
 * main - print the num of arg pased into the prog
 * @argc: the num of command line arg
 * @argv: the array of arguments
 * Return: Always 0 (success)
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
