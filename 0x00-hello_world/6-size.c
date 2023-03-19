#include <stdio.h>

/**
* main - start the program
* Return: 0
*/

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %lu  byte(s)", sizeof(a));
	printf("Size of a char: %lu byte(s)", sizeof(b));
	printf("Size of a char: %lu byte(s)", sizeof(c));
	printf("Size of a char: %lu byte(s)", sizeof(d));
	printf("Size of a char: %lu byte(s)", sizeof(e));
	return (0);
}
