#include "main.h"
/**
 * print_number - Entry point
 *
 * @n:number to print
 *
 * Return: Always 0 (Success)
 */
void print_number(int n)
{
	int temp, digitsCount;
		
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	temp = n;
	digitsCount = 0;

	while (temp != 0)
	{
		digitsCount++;
		temp /= 10;
	}

	while (digitsCount > 0)
	{
		int divisor, i;

		divisor = 1;
		for (i = 1; i < digitsCount; i++)
		{
			divisor *= 10;
		}

		_putchar(n % divisor + '0');
		n %= divisor;
		digitsCount--;
	}
}
