#include <stdio.h>

int main(void)
{
	int array[10];
	char b[98];

	printf("sizeof array: %lu\n", sizeof(array));
	printf("size of b array: %lu\n", sizeof(b));
	printf("b: %p\n", b);
	printf("&b: %p\n", &b);
	printf("size of b: %lu\n", sizeof(&b));
	return (0);
}
