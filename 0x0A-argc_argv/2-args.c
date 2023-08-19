#include <stdio.h>
/**
 * main - print all args it recieves
 * @argc: num of command line args
 * @argv: the array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
