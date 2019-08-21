#include<stdio.h>
#include<string.h>

/*
第25套：函数fun的功能是：将s所指字符中
ASCII值为偶数的字符删除，出屮剩余字符形成一
个新出放在t所指的数组屮。
例如，若s所指字符巾屮的内容为：
"ABCDEFG12345”，其中字符B的ASCII码值为偶
数、…、字符2的ASCII码值为偶数、…都应当
删除,其它依此类推。最后t所指的数组屮的内容应
是：” ACEG135"。
*/
void fun(char *str, char *str1, int len)
{
	int j = 0;
	for (int i = 0; i < len; ++i)
	{
		if(*(str+i)%2 == 1)
		{
			*(str1+j++) = *(str+i);
		}
	}
	for (int i = 0; *(str1+i) != 0; ++i)
	{
		printf(" -> %c", *(str1+i));
	}
	printf("\n");
}

int main()
{
	char str[] = "ABCDEFG12345";
	int len = strlen(str);
	char str1[len];
	fun(str, str1, len);
	return 0;
}