#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int age;

	printf("How old are you?");
	scanf("%d", &age);

	printf("You are %d years old\n", age);

	return (0);
}
