#include "main.h"
/**
* _strlen_recursion - counts characters in string
* @s: string pointer;
* Return: character count
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
* comparator - compares characters
* @s: string pointer
* @n1: first number
* @n2: second number
* Return: compares characters
*/
int comparator(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + comparator(s, n1 + 1, n2 - 1));
	}
	return (0);
}
/**
 * is_palindrome - checks for palindrom
 * @s: string pointer
 * Return: Always 0 (Success)
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}
