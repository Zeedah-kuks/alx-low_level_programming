#include <stdio.h>
/**
 * main - print the name of the prog, followed by a new line
 * @argc: the num of command line arguments
 * @argv: the array of arguments
 * Return: Always 0 (success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
