#include <stdio.h>

int find_nth_term(int n,int a, int b, int c)
{
	if(n == 1)
		printf("%d",a);
	else if(n == 2)
		printf("%d",a+b);
	else if(n == 3)
		printf("%d",a+b);
	return (find_nth_term(n-1,a,b,c)+find_nth_term(n-2,a,b,c)+find_nth_term(n-3,a,b,c));
}
