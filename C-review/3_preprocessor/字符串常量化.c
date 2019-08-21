#include <stdio.h>

// 一个宏通常写在一个单行上。
// 但是如果宏太长，一个单行容纳不下，则使用宏延续运算符（\）

// 需要把一个宏的参数转换为字符串常量时
// 则使用字符串常量化运算符（#）
#define message_for(a, b)  \
    printf(#a " and " #b ": We love you!\n")


int main(void) {
	message_for(Carole, Debra);
	
	return 0;
}
