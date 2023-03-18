#include <stdio.h>
/**
* main - entry point
*
* Return 0 - return success code
*/
int main(void)
{
	char letters[] = "0123456789abcdef";

	for (int i = 0; i < 16; i++)
	{
		putchar(letters[i]);
	}
	putchar('\n');

	return (0);
}

