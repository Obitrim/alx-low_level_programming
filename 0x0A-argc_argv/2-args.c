#include <stdio.h>
/**
* main - print number or arguments passed to
* function
*
* @argc: argument count
* @argv: arguments
* Return: Always successful
*/
int main(int argc, __attribute__((unused)) char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
