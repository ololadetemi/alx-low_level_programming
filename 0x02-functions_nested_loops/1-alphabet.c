#include "1-main.c"
/**
 * print_alphabet -> prints the lowercase alphabets
 *
 */

void print_alphabet(void);
{
	int j;
	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}