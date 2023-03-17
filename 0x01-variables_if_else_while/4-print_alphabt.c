#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	/**
	* print letters in lowercase
	*/
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == 'e' || letter == 'q') 
			continue;

		putchar(letter);
	}
	putchar('\n');

	return (0);
}
