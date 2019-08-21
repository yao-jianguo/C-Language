#include<stdio.h>

int main(){
	int balance[5] = {1000, 2, 3, 17, 50};
	printf("%p\n", balance);
	printf("%p\n", &balance);
	printf("%d\n", *balance);
}
