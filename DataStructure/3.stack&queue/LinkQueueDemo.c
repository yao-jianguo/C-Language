#include <stdio.h>
#include <stdlib.h>


typedef struct QNode{
    int data;
    struct QNode * next;
}QNode;

QNode * initQueue(){
    QNode * queue = (QNode *)malloc(sizeof(QNode));
    queue->next = NULL;
    return queue;
}

QNode* enQueue(QNode * rear, int data){
    QNode * temp =  (QNode *)malloc(sizeof(QNode));
    temp->next = NULL;
    temp->data = data;

    // 使用尾插法向链队列中添加数据元素
    // 注意: 要将之前rear的next填进去
    rear->next = temp;
    rear = temp;
    printf("进队元素 : %d\n", data);

    return rear;
}

QNode* DeQueue(QNode * top, QNode * rear){
    if(top->next == rear) {
        printf("队列为空\n");
        return rear;
    }
    QNode * temp = top->next;
    top->next = top->next->next;
    if(temp == rear) { 
        rear = top;
    }
    printf("出队元素 : %d\n", temp->data);
    free(temp);
    return top;
}

int main() {
    QNode * queue, *top, *rear;
    queue=top=rear=initQueue();//创建头结点
    //向链队列中添加结点，使用尾插法添加的同时，队尾指针需要指向链表的最后一个元素
    rear = enQueue(rear, 1);
    rear = enQueue(rear, 2);
    rear = enQueue(rear, 3);
    top = DeQueue(top, rear);
    rear = enQueue(rear, 4);
    rear = enQueue(rear, 5);
    rear = enQueue(rear, 6);
    // 出队一个元素，并且释放
    top = DeQueue(top, rear);
    top = DeQueue(top, rear);
    top = DeQueue(top, rear);
    top = DeQueue(top, rear);
    return 0;
}