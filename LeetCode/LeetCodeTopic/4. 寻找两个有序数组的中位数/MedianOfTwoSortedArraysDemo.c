#include <stdio.h>
#include <stdlib.h>

// 参考来自 : https://blog.csdn.net/chen_xinjia/article/details/69258706
/**
    给定两个大小为 m 和 n 的有序数组 nums1 和 nums2。

    请你找出这两个有序数组的中位数，并且要求算法的时间复杂度为 O(log(m + n))。

    你可以假设 nums1 和 nums2 不会同时为空。

    示例 1:

    nums1 = [1, 3]
    nums2 = [2]

    则中位数是 2.0
    示例 2:

    nums1 = [1, 2]
    nums2 = [3, 4]

    则中位数是 (2 + 3)/2 = 2.5

-------------------------------------------------
 	示例3: 
    思路:
                  L1  R1
 	num1 = [1  2  4 | 6  7  8]           -------- 6
 	num2 = [4  5  7  9 | 10  11 20 34]   -------- 8
                     L2  R2
 	num = [1  2  4  4  5  6  7  7  8  9  10  11  20  34]
 	则中位数为: 为 7 

    0. 利用二分思想
    1. 由于num1 和 num2的长度是固定的，那么， 只要确定num1切刀的位置，就知道了num2切刀的位置
       例如：num1在2和4切一刀，那么num2切刀的位置在10和11之间
       所以，只需要去操作短的那个数组去操作就好了
    2. 只需保证 L1 < R2 && L2 < R1  (由于num1和num2默认有序, 那么, L1<R1 L2<R2)

-------------------------------------------------
**/

int findMin(int a, int b) {
    return a > b ? b : a;
}

int findMax(int a, int b) {
    return a > b ? a : b;
}

void printArray(char tag, int a[], int n) {
    printf("%c 数组元素为: ", tag);
    for (int i = 0; i < n; ++i) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void findMedianOfTwoSortedArrays(int a[], int a_len, int b[], int b_len) {
    // 操作短的数组
    if(a_len > b_len) { // 确保短的放在前面的位置，方便处理
        return findMedianOfTwoSortedArrays(b, b_len, a, a_len);
    }

    int a_low = 0, a_high = a_len - 1;
    int b_low = 0, b_high = b_len - 1;
    int a_mid, b_mid;
    while(a[a_mid] > b[b_mid+1] || b[b_mid] > a[a_mid+1]) {
        a_mid = a_low + (a_high - a_low)/2;
        b_mid = b_low + (b_high - b_low)/2;
        if(a[a_mid] > b[b_mid+1]) {
            a_high = a_mid -1; 
            b_low = b_mid + 1; 
        } else if (b[b_mid] > a[a_mid+1]) {
            a_low = a_mid + 1; 
            b_high = b_mid -1; 
        }
        printf("a数组mid位置为: %d; b数组mid位置为: %d;\n", a_mid, b_mid);

// num1 = [1  2  4 | 6  7  8]
// num2 = [4  5  7  9 | 10  11 20 34]

// 1 2 4 4 5 6 7 7 8 9 10 11 20 34
    }
    printf("中位数为:%d 和 %d\n", findMax(a[a_mid], b[b_mid]), findMin(a[a_mid+1], b[b_mid+1]));
    float median = (findMax(a[a_mid], b[b_mid]) + findMin(a[a_mid+1], b[b_mid+1]))/2; 
    printf("中位数为:%f\n", median);
}



int main(int argc, char const *argv[]) {
	int num1[] = {1, 2, 4, 6, 7, 8};
    int num2[] = {4, 5, 7, 9, 10, 11, 20, 34};
    int len1 = sizeof(num1)/sizeof(num1[0]);
    int len2 = sizeof(num2)/sizeof(num2[0]);
    printArray('a', num1, 6);
    printArray('b', num2, 8);
    findMedianOfTwoSortedArrays(num1, len1, num2, len2);
	return 0;
}





// num1 = [1  2  4 | 6  7  8]
// num2 = [4  5  7  9 | 10  11 20 34]


// num1 = [1  2  4  6  7 | 8]
// num2 = [4  5  7 | 9  10  11 20 34]













































