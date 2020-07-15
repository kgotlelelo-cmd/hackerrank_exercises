#include <stdio.h>
#include <stdlib.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;

void sort_by_area(triangle *tr, int n)
{
	
	int *p;
	p = malloc(sizeof(int)*n);
	for(int i= 0;i<n;i++)
	{
		float h;
        	h = ((tr[i].a+tr[i].b+tr[i].c)/2);
		p[i] = (h*(h-tr[i].a)*(h-tr[i].b)*(h-tr[i].c));
	}

	for(int i = 0;i<n-1;i++)
	{
		for(int j = 0;j <n-i-1;j++)
		{
			if(p[j] > p[j+1])
			{
				int key;
				key = p[j];
				p[j] = p[j+1];
				p[j+1] = key;

				key = tr[j].a;
				tr[j].a = tr[j+1].a;
				tr[j+1].a = tr[j].a;

				key = tr[j].b;
				tr[j].b = tr[j+1].b;
				tr[j+1].b = key;

				key = tr[j].c;
                                tr[j].c = tr[j+1].c;
                                tr[j+1].c = key;
			}
		}
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}
