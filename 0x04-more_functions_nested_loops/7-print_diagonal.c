#include "main.h"
/**
 * print_diagonal -> draws diagonal line
 * @n: number of times \ will be printed
 */
void print_diagonal(int n)
{
	int j, s;

	j = 0;
	if (n > 0)
	{
		while (j < n)
		{
			s = 0;
			while (s < j)
			{
				_putchar(' ');
				s++;
			}
			_putchar('\\');
			_putchar('\n');
			j++;
		}
	}
	else
		_putchar('\n');
}
