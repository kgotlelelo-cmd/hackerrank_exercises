#include <stdio.h>

int main()
{
	int a;
	int b;

	a = 4;
	b = 3;

	a = a ^ b;
	printf("a =: %d\n",a);
	b = a ^ b;
	printf("b =: %d\n",b);
	a = a ^ b;
	printf("a = : %d\n",a);
	return 0;
}

