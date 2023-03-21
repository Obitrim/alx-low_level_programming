#include "main.h"
/**
 * print_last_digit - print last digit
 *
 * @num: number whose last digit is to be returned
 *
 * Return: value of last digit
 */
int print_last_digit(int num)
{
	int last_digit;

	if (num < 0)
		num = num  * -1;

	if (num == INT_MIN)
		last_digit = 8;
	else
		last_digit = num % 10;

	_putchar(last_digit + '0');

	return (last_digit);
}
