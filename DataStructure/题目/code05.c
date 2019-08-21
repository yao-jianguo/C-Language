#include<stdio.h>

/*
编写函数fun
函数的功能是：删去一维数组中所有相同的数，使之只剩一个。
数组中的数已按有小到大的顺序排列，函数返回删除后数组中数据的个数。

例如：
一维数组中的数据是2 2 2 3 4 4 5 6 6 6 6 7 7 8 9 9 10 10 10 
删除后，数组中的内容应该是：2 3 4 5 6 7 8 9 10
*/

int fun(int *arr, int n);

int main()
{
	int arr[] = {2,2,2,3,4,4,5,6,6,6,6,7,7,8,9,9,10,10,10};
	int m = fun(arr, 19);
	printf("一维数组中的非重复的数据个数为：%d\n", m);
	return 0;
}

int fun(int *arr, int n){
	int tmp = arr[0];
	int m = 1;
	for (int i = 1; i < n; ++i) {
		if(arr[i] == tmp)
			continue;
		else{
			tmp = arr[i];
			m++;
		}
	}
	return m;
}