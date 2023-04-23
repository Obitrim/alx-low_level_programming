#include <stdio.h>
#include <stdlib.h>
/**
* main - multiply two numbers passed
* as argument
*
* @argc: argument count
* @argv: arguments
* Return: Always successful
*/
int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
