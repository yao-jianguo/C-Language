#include <stdio.h>
#include <stdlib.h>
#define N 10

int enQueue(int *a, int rear, int data){
    if(rear>=N) {
        printf("队列已满!\n");
        exit(1);
    }
    *(a+rear++) = data;
    printf("成功入队元素%d\n", data);
    return rear;
}

void deQueue(int *a, int front, int rear){
    if(front == rear){
        printf("队列为空!\n");
        exit(1);
    }
    while(front < rear)
        printf("出队元素: %d\n", *(a+front++));
}

int main() {
    int a [N]; 
    int front, rear;
    front = rear = 0;
    rear = enQueue(a, rear, 1);
    rear = enQueue(a, rear, 2);
    rear = enQueue(a, rear, 3);
    rear = enQueue(a, rear, 4);
    rear = enQueue(a, rear, 5);
    // 全部出队
    deQueue(a, front, rear);
    return 0 ;
}

/*

                                rear
                                👇
-------------------------------------------------
|     |     |     |     |     |     | ... |     |
-------------------------------------------------
 a[0]  a[1]  a[2]  a[3]  a[4]  a[5]   ...  a[n]
  👆
  top

*/