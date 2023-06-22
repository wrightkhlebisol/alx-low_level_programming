#include <stdio.h>
int main(void)
{
	int i = 3, j = 7;
	const int * const ip;
	//*ip = j;
	printf("%p %d\n", ip, *ip);
	return (0);
}
