#include<stdio.h>

int f(int i){
	static int n = 1;
	return n = n*i;
}

int main(){
	int i;
	for(i = 1; i < 5; i++)
		printf("%3d", f(i));
	printf("\n");
}

