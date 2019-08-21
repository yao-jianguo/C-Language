#include<stdio.h>
#include<string.h>
/*
函数fun的功能是：
将s所指字符串屮ASCII值为奇数的字符删除，串中剩余字符形成一个新串放在t所指的数组中。
例如，若s所指字符岀中的内容为：
“ABCDEFG12345”，其中字符A的ASCII码值为奇
数、…、字符1的ASC11码值也为奇数、…都应
当删除，其它依此类推。最后t所指的数组中的内
容应是:BDF24
*/

void fun(char* str, char* t, int len)
{
	int  j= 0;
	for (int i = 0; i < strlen(str); ++i)
	{
		if(*(str+i)%2 == 0)
			t[j++] = *(str+i);
	}
	t[j] = 0;
	for (int i = 0; i < strlen(t); ++i)
	{
		printf("%c ", t[i]);
	}
	printf("\n");

}

int main()
{
	char str[]="ABCDEFG12345";
	char t[12];
	fun(str, t, 12);
	return 0;
}