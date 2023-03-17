#include <stdio.h>
/**
* main - entry point
*
* Return 0 - return success code
*/
int main(void)
{
	char letter;

	for (letter = '0'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
}

