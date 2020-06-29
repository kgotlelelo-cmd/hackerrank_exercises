#include <stdio.h>

int add_sum(int a, int b)
{
	return a + b;
}

int diff_sum(int a,int b)
{
	return a - b;
}

float sum (float c,float d)
{
	return c + d;
}

float diff(float c,float d)
{
	return c - d;
}

int main()
{
	int a;
	int b;
	float c;
	float d;

	scanf("%d %d", &a, &b);
	scanf("%f %f", &c,&d);

	printf("%d %d\n%.1f %.1f\n",add_sum(a,b),diff_sum(a,b),sum(c,d),diff(c,d));

	return 0;
}
