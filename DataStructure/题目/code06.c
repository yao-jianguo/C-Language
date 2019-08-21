#include<stdio.h>
#include<string.h>

/*
编写fun
功能：移动字符串中的内容，移动规则如下：
把第1到第m个字符，平移到字符串的最后，把第m+1到最后的字符移到字符串的前部。
例如：字符串中原有的内容为“ABCDEFGHIJK”，m的值为3，则移动后，字符串中的内容应该是“DEFGHIJKABC”。
*/

void fun(char *arr, int m);

int main()
{
	int m = 3;

	char arr[] = "ABCDEFGHIJK";
	printf("元数据列为: ");
	for (int i = 0; i < strlen(arr); ++i) {
		printf("%c ", arr[i]);
	}
	printf("\n");

	fun(arr, m);
}

void fun(char *arr, int m) 
{
	int len = strlen(arr);
	char tmp[m];
	int tmp_m = m-1; // 存放临时数据的最大序号

	for (int i = 0; i < m; ++i){
		tmp[i] = arr[i];
	}
	for (int i = m; i < len; ++i) {
		arr[i - m] = arr[i];
	}
	for (int j = len - 1; j >= len - m; --j){
		arr[j] = tmp[tmp_m--];
	}

	printf("变换后数据列为: ");
	for (int i = 0; i < len ; ++i) {
		printf("%c ", arr[i]);
	}
	printf("\n");
}

