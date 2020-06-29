int max_of_four(int a,int b,int c,int d)
{
	int max;

	max = a;
	if(max < b)
	{
		max = b;
	}
	if(max < c)
	{
		max = c;
	}
	if(max < d)
	{
		max = d;
	}
	return max;
}
