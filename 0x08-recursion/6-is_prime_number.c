#include "main.h"
int can_divide(int n, int i);
/**
 * is_prime_number - tests primality of a number
 * @n: number
 * Return: Always 0 (Success)
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else if (n == 2 || n == 3)
		return (1);
	else
		return (!can_divide(n, 3));

}

/**
* can_divide: checks if @n can be divided by @i
* @n: number
* @i: divisor
* Return: 0 or 1;
*/
int can_divide(int n, int i)
{
	if (i > (n / 2))
		return (0);
	else if (n % i == 0)
		return (1);
	else
		return (can_divide(n, i + 1));
}
