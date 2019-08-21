// 实参             形参
// ----------       ----------
// 1 字符数组名      字符数组
// 2 字符指针变量    字符数组
// 3 字符指针变量    字符指针变量
--------------------------------------------------------------
#include <stdio.h>

int main()
{
	void copy_string(char from[], char to[]);
	char a[]="I am a teacher.";
	char b[]="you are a student.";
	printf("string a=%s\nstring b=%s\n",a,b);
	printf("copy string a to string b:\n");
	copy_string(a,b);   *** // 字符数组名作为函数参数
	printf("\nstring a=%s\nstring b=%s\n",a,b);  
	return 0;
}
void copy_string(char from[], char to[]) ***
{ 
	int i=0;
	while(from[i]!='\0')
		{to[i]=from[i];i++;}
	to[i]='\0';
}        

--------------------------------------------------------------
#include <stdio.h>
int main()
{
	void copy_string(char from[], char to[]);
	char a[]="I am a teacher.";
	char b[]="you are a student.";
	char *from=a,*to=b;
	printf("string a=%s\nstring b=%s\n",a,b);
	printf("\ncopy string a to string b:\n");
	copy_string(from,to);     *** // 字符指针变量
	printf("string a=%s\nstring b=%s\n",a,b);  
	return 0;
}

void copy_string(char from[], char to[]) ***
{ 
	int i=0;
	while(from[i]!='\0')
		{to[i]=from[i];i++;}
	to[i]='\0';
} 

--------------------------------------------------------------
#include <stdio.h>
// 用字符指针变量作为形参和实参
int main()
{
	void copy_string(char *from, char *to);
	char *a="I am a teacher.";
	char b[]="You are a student.";
	char *p=b;                                             // 使指针变量p指向b数组首元素
	printf("string a=%s\nstring b=%s\n",a,b);              // 输出a串和b串
	printf("\ncopy string a to string b:\n");
	copy_string(a,p);   ***                                // 调用copy_string函数，实现复制
	printf("string a=%s\nstring b=%s\n",a,b);  
	return 0;
}

void copy_string(char *from, char *to) ***                 // 定义函数，形参为字符指针变量
{  
	for(;*from!='\0';from++,to++)
		{*to=*from;}
	*to='\0';
}

o1:
void copy_string(char *from, char *to) ***                 // 定义函数，形参为字符指针变量
{  
	while((*to++ = *from++) != '\0');
}

o1:
void copy_string(char *from, char *to) ***                 // 定义函数，形参为字符指针变量
{  
	for(;(*to++ = *from++) != '\0';);
}






























