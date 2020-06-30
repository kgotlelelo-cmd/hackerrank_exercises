#include <stdio.h>

void print_number(int a,int b)
{
	char *strings[] = {"one","two","three","four","five","six","seven","eight","nine","even","odd"};

	for(int i = a;i <= b;i++)
	{
		if(i>=1 && i<=9)
			printf("%s\n",strings[i-1]);
		else
			printf("%S\n",strings[9+(i%2)]);
	}
}
