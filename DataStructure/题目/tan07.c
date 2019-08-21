#include<stdio.h>

int main()
{
	int a = 12; 
	float b;
	printf("%d\n", a);
	printf("%i\n", a);
	printf("%o\n", a);
	printf("%x\n", a);

	scanf("a=%d, b=%f", &a, &b);
	printf("%d\n", a);
	printf("%f\n", b);
}
