#include <stdio.h>

void print_number(int a,int b)
{
	char *strings[] = {"one","two","three","four","five","six","seven","eight","nine"};

	for(int i = a;i >= a && i <= b;i++)
	{
		if(i>=1 && i<=9)
			printf("%s\n",strings[i-1]);
		else if(i>9 && (i%2 == 0))
			printf("even\n");
		else if(i>9 && (i%2 != 0))
			printf("odd\n");
	}
}
