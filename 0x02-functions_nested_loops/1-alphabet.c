#include "1-main.c"
/**
 * print_alphabet -> prints the lowercase alphabets
 *
 */
void print_alphabet(void);
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
