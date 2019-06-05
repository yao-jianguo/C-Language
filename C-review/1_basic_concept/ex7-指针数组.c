#include <stdio.h>

//举例: 一个指针数组, 数组中的每个元素指向一个数组，将所有的数据打印出来

int main() {
    //三个数组
    int a = 1;
    int b = 4;
    int c = 7;
    //定义一个数组，其中三个元素都是指针
    int *point_arr[3];
    point_arr[0] = &a;
    point_arr[1] = &b;
    point_arr[2] = &c;

    for (int i = 0; i < 3; i++) {
        printf("value of %d position num:%d\t", i, *point_arr[i]);

        printf("\n");
    }

    return 0;

}
