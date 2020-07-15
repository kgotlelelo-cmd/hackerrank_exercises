#include <stdio.h>
#include <stdlib.h>

struct s_box
{
	int length;
	int width;
	int height;
};

typedef struct s_box t_box;

int get_volume(t_box b)
{
	return b.length*b.width*b.height;	
}

int is_lower_than_max_height(t_box b)
{
	return b.height<41?1:0;
}

int main()
{
	int n;
	scanf("%d", &n);

	t_box *boxes = malloc(n*sizeof(t_box));
	for(int i = 0;i<n;i++)
	{
		scanf("%d%d%d",&boxes[i].length,&boxes[i].width,&boxes[i].height);
	}
	for(int i=0;i<n;i++)
	{
		if(is_lower_than_max_height(boxes[i]))
		{
			printf("%d\n",get_volume(boxes[i]));
		}
	}
	return 0;
}
