#include<stdio.h>

/*
写一个函数unsigned fun(unsigned w)
w是一个大于10的无符号整数，若w是n(n>=2)位的整数，函数求出w的低n-1位作为函数值返回。

例如：w值为5923，则函数返回923：w值为923，则函数返回23
*/

unsigned fun(unsigned w);

int main()
{
	unsigned w = 5923; 
	unsigned res = fun(w);
	printf("%u\n", res);
	return 0;
}


unsigned fun(unsigned w)
{
	if (w > 10000)	w %= 10000;
	else if (w > 1000)	w %= 1000;
	else if (w > 100)	w %= 100;
	else if (w > 10)	w %= 10;
	
	return w;
}