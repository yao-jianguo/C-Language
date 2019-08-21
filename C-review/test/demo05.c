#include<stdio.h>

int main(){
	int a = getchar();
	putchar(a);

	float i = 3.14159;
	//保留三位小数，第四位按照“四舍五入”得到
	double result = (int)(i*10000+0.5)/10000.0;
	printf("\n%.4f\n", result);
	
	printf("%d\n", 10>9);
	printf("%d\n", 10<9);
}
