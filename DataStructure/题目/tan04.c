#include<stdio.h>

void pprint(int a, int b);

// 指向函数的指针
// 必须要指定类型，无论是void还是其他类型
int main()
{
	void (*p)(int, int);
	p = pprint;
	(*p)(2, 3);
	return 0;
}

void pprint(int a, int b){
	printf("%d\n", a);
	printf("%d\n", b);
}