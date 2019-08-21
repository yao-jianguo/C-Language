#include <stdio.h>
/**
程序定义了N*N的二维数组，并在主函数中自动赋值。
编写函数fun(int a[][N], int n), 函数的功能是：使数组左下三角元素的值乘n。
例如：若n的值为3, a数组中的值为 |1 9 7| |3 9 7| a = |2 3 8| 则返回主程序后a数组中的值 为|6 9 8||4 5 6||12 15 18| 
**/

// 1 2 3 0-0
// 4 5 6 1-1
// 7 8 9 2-2

int const N = 3;

void fun(int a[N][N], int n);

int main()
{
	int arr[N][N] = {{1,2,3},{4,5,6},{7,8,9}};
	fun(arr, 3);
	return 0;
}

void fun(int a[][N], int n)
{
	printf("原本二维数组：\n");
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}

	printf("计算后的二维数组：\n");
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			if (j<=i)
				a[i][j] = a[i][j]*n;
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
}