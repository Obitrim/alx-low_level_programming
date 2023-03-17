#include <stdio.h>
/**
* main - entry point
*
* Return 0 - return success code
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
