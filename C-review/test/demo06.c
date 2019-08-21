#include<stdio.h>

int main(){
	int arr[1][3] = {1, 2, 3};
	printf("%p\n", &arr);
	printf("%d\n", &arr);
}
