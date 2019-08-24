#include <stdio.h>
#include <stdlib.h>

/*
	直接插入排序
*/
void print(int a[], int i, int n) {
	printf("第 %d 轮插入结果: ", i);
	for (int i = 0; i < n; ++i) {
		printf("%d ", a[i]);
	}
	printf("\n");
}

/*
4, 6, 7, 22, 5, 7, 3, 5, 10, 43
        i-1  i 
            temp
         j
*/
void InsertSort(int a[], int n) {
	for (int i = 1; i < n; ++i) {
		if(a[i] < a[i-1]){
			int temp = a[i];
			int j = i-1; 
			while(a[j] > temp && j >= 0) {  //采用顺序查找方式找到插入的位置，在查找的同时，将数组中的元素进行后移操作，给插入元素腾出空间
				a[j+1] = a[j];
				j--;
			}
			a[j+1] = temp;
		}
		print(a, i+1, n);
	}
}

int main(int argc, char const *argv[]) {
	int a[] = {4, 6, 7, 22, 5, 7, 3, 5, 10, 43};
	print(a, 0, sizeof(a)/sizeof(int));
	InsertSort(a, sizeof(a)/sizeof(int));
	return 0;
}










































