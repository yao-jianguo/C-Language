#include<stdio.h>

/*
编写fun
对长度为7的字符串中，除首位字符外，将其余5个字符按照ASCII码降序排列
e.g. 原字符串：CEAeda， 降序后：CedcEAa
*/

void fun(char* str, int len)
{
	char tmp;
	for (int i = 0; i < len; ++i)
	{
		for (int j = 0; j < len - 1; ++j)
		{
			if(*(str+j) < *(str+j+1))
			{
				tmp = *(str+j);
				*(str+j) = *(str+j+1);
				*(str+j+1) = tmp;
			}
		}
	}
}

int main()
{
	char s[] = "CEAeda";
	printf("排序前: %s\n", s);
	fun(s, 6);	
	printf("排序后: %s\n", s);
	return 0;
}





















































