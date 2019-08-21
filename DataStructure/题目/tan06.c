#include<stdio.h>

int main()
{
	int arr[5]={1,2,3,4,5};
	int *num[5]={&arr[0],&arr[1],&arr[2],&arr[3],&arr[4]};
	int **p;
	p=num;
	for (int i = 0; i < 5; ++i)
	{
		printf("(%d)\n", **p++);
	}
	return 0;
}