#include<stdio.h>
#include<string.h>
/*
请编写函数fun,函数的功能是：将放在
字符出数组的M个字符出（每岀的长度不超过N）,
按顺序合并组成一个新的字符出。函数fun中给出
的语句仅供参考。例如，字符出数组中的M个字
符出为
AAAA
BBBBBBB
CC
则合并后的字符出的内容应是：
AAAABBBBBBBCC
*/

void fun(char arr[][10]);

int main()
{
	char arr[][10] = {{"AAAA"},{"BBBBBBB"},{"CC"}};
	fun(arr, 3);
	return 0;
}

char fun(char str[][10], int n)
{
	char str1[30];
	for (int i = 0; i < n; ++i)
	{
		strcat(str1, str[i])
	}
	return str1;
}