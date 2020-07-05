#include <stdio.h>
#include <stdlib.h>

void digits_frequency(char *num)
{
	int i;
	int a[10] = {0,0,0,0,0,0,0,0,0,0};

	i = 0;
	while(num[i])
	{
		if(num[i] >= '0' && num[i]<= '9')
		{
			a[num[i] - '0'] += 1;
		}
		i++;
	}

	i = 0;
	while(i<10)
	{
		printf("%d ", a[i]);
		i++;
	}
}

int main()
{
	char *num;

	num = (char *)malloc(1024*sizeof(char));
	scanf("\n");
	scanf("%[^\n]%*c", num);

	digits_frequency(num);
	return 0;
}
