#include<stdio.h>

/*
	学生的记录由学号和成绩组成，N名学生的数据已在主函数中放入结构体数组s中，请编fun
	它的功能是：把指定分数范围内的学生数据放在b所指的数组中，分数范围内的学生人数由函数值返回。
	例如，输入的分数是60 69,则应当把分数在60到69的学生数据进行输出，包含60分和69分的学生数据。
	主函数中将把60放在low中，把69放在heigh中
*/

struct stu
{
	int str_no;
	int score;
};
typedef struct stu STU;

STU* fun(STU *stu, int len, int low, int heigh)
{
	STU b[len];
	int j = 0;
	for (int i = 0; i < len; ++i)
	{
		if((stu+i)->score >= low && (stu+i)->score <= heigh)
			b[j++] = stu[i];
	}
	// for (int i = 0; (b+i)->score != 0; ++i)
	// {
	// 	printf("学号:%d 成绩:%d\n", b[i].str_no, b[i].score);
	// }
	return b;
}

int main()
{
	STU stu[] = {{1, 90}, {2, 50}, {3, 78}, {4, 97}, {5, 80}};
	STU *b;
	b = fun(stu, 5, 70, 90);
	for (int i = 0; (b+i)->score != 0; ++i)
	{
		printf("学号:%d 成绩:%d\n", b[i].str_no, b[i].score);
	}
	return 0;
}


