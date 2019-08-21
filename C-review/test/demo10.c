#include<stdio.h>

int main(){
	int arr[] = {1, 2, 3, 4, 5};
	int *p = arr;
	printf("%p\n", arr);
	printf("%p\n", p);

	printf("%d\n", p[1]);
	printf("%d\n", *(p+1));
	return 0;
}
