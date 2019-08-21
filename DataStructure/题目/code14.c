#include<stdio.h>
#include<string.h>

/*
	请编写函数fun,函数的功能是：
	判断字符出是否为回文? 若是，函数返回1,主函数中输出:YES, 否则返冋0,主函数中输出NO。
	回文是指顺读和倒读都一样的字符出。
	例如，字符出LEVEL是回文，而字符串123312就不是回文。
*/

void fun(char *str, int len);

int main()
{
	char str[] = "1235321";
	int len = strlen(str);
	fun(str, len);
	return 0;
}

void fun(char *str, int len)
{
	char *p = str;
	char *q = str+len-1;
	int tag = len/2;
	for (;*p++ == *q-- && tag >0; tag--);

	if (tag == 0)
		printf("%s\n", "YES");
	else
		printf("%s\n", "NO");
}