#include <stdio.h>

/**
 * main - Entry point
 * Description- Print the size of computer it is compiled on
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char c;
	int i;
	long int l;
	long long int li;
	float f;

	printf("Size of a char: %l byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a int: %l byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long: %l byte(s)\n", (unsigned long)sizeof(l));
	printf("Size of a long long int: %l byte(s)\n", (unsigned long)sizeof(li));
	printf("Size of a float: %l byte(s)\n", (unsigned long)sizeof(f));
}
