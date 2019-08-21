#include<stdio.h>


void search1(int (*sc)[4], int n);
void search2(int sc[][4], int n); 

int main()
{
	int score[3][4]={{90, 91, 92, 93}, {80, 81, 82, 83}, {97, 98, 99, 100}};

	// 找出第二个人的成绩
	search1(score, 1);
	search2(score, 1);
	return 0;
}

void search1(int (*sc)[4], int n)
{
	printf("=============使用n个元素的一维数组指针===========\n");
	for (int i = 0; i < 4; ++i)
	{
		printf("%4d", *(*(sc+n)+i));
	}
	printf("\n");

}


void search2(int sc[][4], int n)
{
	printf("================使用一般一维数组指针===========\n");
	for (int i = 0; i < 4; ++i)
	{
		printf("%4d", sc[n][i]);
	}
	printf("\n");

}