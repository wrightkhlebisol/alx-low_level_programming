#include <stdio.h>

int main(void)
{
	int a[5];
	int *b;
	char c[5];

	printf("%p, %p, %p ", &a, &b, &c);
	printf("Printing string sa");
	return (0);
}
