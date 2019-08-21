#include<stdio.h>

/*
请编写函数fun,函数的功能是：将M行N列的二维数组的数据，按列的顺序依次放到一维数组中。
函数fun中给出的语句仅供参考。
例如，二维数组小的数据为：
33 33 33 33
44 44 44 44
55 55 55 55
则维数组中的内容应是：
33 44 55 33 44 55 33 44 55 33 44 55。
*/
void fun(int arr[][4], int arr_r[], int m, int n);
int main()
{
	int arr[3][4] = {{33, 33, 33, 33}, {44, 44, 44, 44}, {55, 55, 55, 55}};
	int arr_r[12];
	fun(arr, arr_r, 3, 4);
	for (int i = 0; i < 12; ++i)
	{
		printf("%d ", arr_r[i]);
	}
	printf("\n");
	return 0;
}

void fun(int arr[][4], int arr_r[], int m, int n)
{
	int i, j, p = 0;
	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < m; ++j)
		{
			arr_r[p++] = arr[j][i];
		}
	}
}