#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main - print number or arguments passed to
* function
*
* @argc: argument count
* @argv: arguments
* Return: Always successful
*/
int main(int argc, char *argv[])
{
	int sum, i, j, num;

	sum = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		num = 0;
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (0);
			}
			num = num * 10 + (argv[i][j] - '0');
			j++;
		}
		if (num > 0)
		{
			sum += num;
		}
	}
	printf("%d\n", sum);
	return (0);
}
