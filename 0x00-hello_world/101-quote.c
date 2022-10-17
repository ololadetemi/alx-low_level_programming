#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the exact string
 * Return: Always 1
 */
int main(void)
{
	write(STDOUT_FILENO, "and that piece of art is useful" 
			\"- Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
