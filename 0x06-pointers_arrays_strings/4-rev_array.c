#include "main.h"
/**
 * reverse_array -> reversing an array
 * @a: array a
 * @n: an element of the array
 */
void reverse_array(int *a, int n)
{
	int tmp[100000];
	int i;

	i = 0;
	while (i < n)
	{
		tmp[i] = a[i];
		i++;
	}
	n--;
	i = 0;
	while (n >= 0)
	{
		a[n] = tmp[i];
		n--;
		i++;
	}
}
