#include "main.h"
/**
 * reverse_array - reverses the content of an array
 * @a: array of elements
* @n: number of elements in array
 * Return: Always 0 (Success)
 */
void reverse_array(int *a, int n)
{
	int i;
	int half_len;
	int container;

	i = 0;
	half_len = n % 2 == 0 ? n / 2 : (n - 1) / 2;
	while (i < half_len)
	{
		container = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = container;
		i++;
	}
}
