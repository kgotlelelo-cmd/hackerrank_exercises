#include <stdio.h>

void ft_array_reversal(int num,int *arr)
{
	int i;
	int temp;

	i = 0;
	while(i<num)
	{
		temp = arr[i];
		arr[i] = arr[n-1];
		arr[n-1] = temp;
		i++;
		n--;
	}
}
