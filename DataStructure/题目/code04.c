#include<stdio.h>
/*
	请编写函数fun，函数的功能是统计各年龄段的人数，N个年龄通过调用随机函数获得，并放在主函数的age数组中: 
	要求函数
	把0~9岁年龄段的人数放在d[0]中
	把10~19岁年龄段的人数放在d[1]中
	把20~29岁年龄段的人数放在d[2]中
	以此类推，把100岁(含100)以上年龄的人数都放在d[10]中。
	结果在main函数中输出
*/
void fun(int *a, int *d);

const int N = 9;

int main() {
	// 统计各个年龄段的人数
	int a[] = {12,42,123,21,41,62,13,34,142}; //age
	int d[11];
	fun(a, d);

	// main 中输出数据
	for (int i = 0; i < 11; ++i) {
		printf("年龄段 %d~%d 的人数: %d\n",i*10, i*10+9, d[i]);
	}
}

// C编译器都是将数组名作为指针变量来处理的，因此在此处，可以使用 a[] 也可以使用 *a
// void fun(int *a, int *d) {
void fun(int a[], int d[]) {
	for (int i = 0; i < 11; ++i) {
		d[i] = 0;
	}

	for (int j = 0; j < N; ++j) {
		if(a[j] >= 100)
			d[10]++;
		else if(a[j] >=0 && a[j] < 100)
			d[a[j]/10]++;
		else
			continue;
	}
}

