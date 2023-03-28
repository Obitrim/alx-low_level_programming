#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str, *str1, *str2;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    print_rev(str);
	str1 = "Holberton!";
	print_rev(str1);
	str2 = "";
	print_rev(str2);
    return (0);
}
