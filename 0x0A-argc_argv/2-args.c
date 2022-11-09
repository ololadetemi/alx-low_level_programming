#include <stdio.h>

/**
 * main -> a function to print its name
 * @argc: argc param
 * @argv: an array of a command list
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("argv index %d is = %s\n", i, argv[i]);
	}
	return (0);
}
