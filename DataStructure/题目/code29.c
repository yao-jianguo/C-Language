#include<stdio.h>

/*
	学生的记录山学号和成绩组成，N名学
	生的数据已在主函数小放入结构体数组s 
	请编写函数fun,它的功能是：把高于等于平均分的学生数据放在b所指的数组屮，
	高于等于平均分的学生人数通过形参n传冋，平均分通过函数值返冋。
*/

struct stu
{
	int stu_no;
	int score;
};
typedef struct stu STU;

double fun(STU* stu, int* b, int n)
{
	double avg;
	int sum = 0;
	int j = 0;
	for (int i = 0; i < n; ++i)
		sum += (stu+i)->score;
	avg = sum/n;
	for (int i = 0; i < n; ++i)
	{
		if((stu+i)->score > avg)
			*(b+j++) = (stu+i)->score;
	}
	*(b+j) = 0;


	for (int i = 0; *(b+i) != 0; ++i)
	{
		printf(" -> %d", *(b+i));
	}
	return avg;
}

int main()
{
	STU stus[] = {{1, 90}, {2, 50}, {3, 78}, {4, 97}, {5, 80}};
	int b[5];
	double avg = fun(stus, b, 5);
	printf("\n平均成绩是: %f\n", avg);
	return 0;
}