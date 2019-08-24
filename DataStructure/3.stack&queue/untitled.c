#include <stdio.h>
#include <stdlib.h>


typedef struct QNode{
    int data;
    struct QNode * next;
}QNode;

QNode * initQueue(){
 
}

QNode* enQueue(QNode * rear,int data){
 
}

QNode* DeQueue(QNode * top,QNode * rear){
 
}

int main() {
    QNode * queue,*top,*rear;
    queue=top=rear=initQueue();//创建头结点
    //向链队列中添加结点，使用尾插法添加的同时，队尾指针需要指向链表的最后一个元素
 
}