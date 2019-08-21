#include<stdio.h>

/*
学生的记录由学号和成绩组成，N名学生的数据已在主函数中放入结构体数组s中，请编fun
它的功能是：把指定分数范围内的学生数据放在b所指的数组中，分数范围内的学生人数由函数值返回。
例如，输入的分数是60 69,则应当把分数在60到69的学生数据进行输出，包含60分和69分的学生数据。
主函数屮将把60放在low中，把69放在heigh中
*/

struct stu
{
	int str_no;
	int score;
};
typedef struct stu STU;

int main()
{
	STU stu = {{1, 90}, {2,50}};
	printf("%sd\n", stu.str_no);
	return 0;
}