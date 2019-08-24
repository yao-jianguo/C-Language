#include <stdio.h>
#include <stdlib.h>


void print(int a[], int i, int n) {
	printf("第 %d 轮插入结果: ", i);
	for (int i = 0; i < n; ++i) {
		printf("%d ", a[i]);
	}
	printf("\n");
}
/*
3, 1, 7, 5, 2, 4, 9, 6
         i
l     h
0     2
1, 3, 7
*/

void BInsertSort(int a[], int n) {
	int low, high, mid, x, i, j;
	for (i = 1; i < n; ++i) { // 找出要插入元素的位置
		x = a[i]; low = 0; high = i - 1;
		while(low <= high) {
			mid = low + (high-low)/2;
			if(a[mid] == x) {
				low = mid + 1;   // 如果相等，那么选择mid后面的位置进行插入
			} else if (x > a[mid]) {
				low = mid + 1;
			} else {
 				high = mid - 1;
			}
		}
		for (j = i; j > low; --j) {
			a[j] = a[j-1];
		}
		a[j] = x;

		print(a, i, n);
	}
}

int main(int argc, char const *argv[]) {
	int a[] = {6, 5, 7, 9, 10, 62, 9, 12};
	print(a, 0, sizeof(a)/sizeof(int));
	BInsertSort(a, 8);
	return 0;
}





















