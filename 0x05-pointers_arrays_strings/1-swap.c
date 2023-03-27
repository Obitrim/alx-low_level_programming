#include "main.h"
/**
 * swap_int - swap values
 * @a: pointer to an integer
 * @b: pointer to second integer
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int container;

	container = *a;
	*a = *b;
	*b = container;
}
