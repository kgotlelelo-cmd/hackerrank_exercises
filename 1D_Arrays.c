#include <stdio.h>

int ft_sum_array_values(int n,int *arr)
{
	int i;
	int sum;

	i = 0;
	sum = 0;
	while(i < n)
	{
		scanf("%d", &arr[i]);
		sum = sum + arr[i];
		i++;
	}
	return sum;
}
