#include<stdio.h>

// 编写一个函数，函数额功能是删除字符串中所有的空格
// 例如：主函数中输入"asd af aa z67"，则输出为"asdafaaz67"

void handler(char *str);

int main()
{
	char str[20];
	gets(str);

	handler(str);

	puts(str);
	return 0;
}

void handler(char *str)
{
	// 为了避免再开一个字符串空间，使用指针p来指向每次检查的字符
	char *p = str;
	int i = 0;
	while(*p++)
	{
		if(*p != ' ')
			str[i++] = *p;
		
		// p++;
	}
	str[i] = '\0';  // 将所有非空元素遍历结束之后，给一个结束标志符
}