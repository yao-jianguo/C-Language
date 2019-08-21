#include<stdio.h>

/*
	学生的记录山学号和蔵绩组成，N名学生的数据已在主函数屮放入结构体数组S中
	请编写函数fun
	它的功能是：把分数最低的学生数据放在b所指的数组屮
	注意：分数最低的学生可
	能不止一个，函数返冋分数最低的学生的人数。
*/

#define N 5

struct strec
{
	int stu_no;
	int s;
};
typedef struct strec STREC;

int fun(STREC *a, STREC *b)
{
	int i, j = 0, min=a[0].s ;
	for(i = 0 ; i < N; i++) {
		if(min > a[i].s) 
		{
			j =0 ; 
			b[j++] = a[i]; 
			min = a[i].s ;
		}
		else if(min == a[i].s)
			b[j++] = a[i];
	}
	return j;
}

int main()
{
	STREC a[] = {{1, 90}, {2, 50}, {3, 50}, {4, 97}, {5, 80}};
	STREC b[5];
	int n = fun(a, b);
	printf("%d\n", n);
	return 0;
}