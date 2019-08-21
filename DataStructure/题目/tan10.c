#include<stdio.h>

// 利用指针交换a b值
int main()
{
	int a = 10, b = 20;
	int *p1, *p2;
	p1 = &a; 
	p2 = &b;
	printf("a=%d b=%d\n", *p1, *p2);

	p2 = &a; 
	p1 = &b; 
	printf("a=%d b=%d\n", *p1, *p2);
	

	int c = 10; 
	int *p3 = &c;

	return 0;
}
