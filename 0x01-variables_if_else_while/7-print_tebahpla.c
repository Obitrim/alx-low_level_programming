#include <stdio.h>
/**
* main - entry point
*
* Return: always return  0 success
*/
int main(void)
{
	char letter;
	/* print alphabets in reverse */
	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
