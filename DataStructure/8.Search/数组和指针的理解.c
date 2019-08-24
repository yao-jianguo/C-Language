#include <stdio.h>
#include <stdlib.h>

// 理解指针和数组的关系
int main(int argc, char const *argv[]) {
	int *a;
	a = (int *)malloc(5*sizeof(int));
	for (int i = 0; i < 5; ++i) {
		scanf("%d",&a[i]);
	}

	for (int i = 0; i < 5; ++i) {
		printf("%d\n", a[i]);
	}
	return 0;
}

// 1. 定义了指针变量 a 
// 2. a 指向申请的存储空间(int类型的*5)
// 3. C编译器识别(int类型的*5) 其实也就是数组Sw