#include <stdio.h>

int sum_of_digits(int n)
{
	int sum;

	sum = 0;
	while(n>0)
	{
		sum = sum + (n%10);
		n = n/10;
	}
	return sum;
}

int main()
{
	int n;
	scanf("%d", &n);
	printf("%d\n",sum_of_digits(n));
	return 0;
}

