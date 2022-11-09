#include <stdio.h>

/**
 * main -> function to print its name
 * @argc: argc param
 * @argv: an array of a command list
 * Return: 0 for success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
