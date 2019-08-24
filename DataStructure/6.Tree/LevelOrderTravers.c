#include <stdio.h>
#include <stdlib.h>
#define TElemType int

// 树的形式---
//          9
//       3     1
//     4  5  4   6

//初始化队头和队尾指针开始时都为0
int front = 0, rear = 0;

typedef struct BiTNode{
    TElemType data;//数据域
    struct BiTNode *lchild,*rchild;//左右孩子指针
}BiTNode,*BiTree;

BiTNode * CreateBiTree(BiTNode *T) {
    T = (BiTNode*)malloc(sizeof(BiTNode));
    T->data = 9;
    T->lchild = (BiTNode*)malloc(sizeof(BiTNode));
    T->rchild = (BiTNode*)malloc(sizeof(BiTNode));

    T->lchild->data = 3;
    T->lchild->lchild = (BiTNode*)malloc(sizeof(BiTNode));
    T->lchild->rchild = (BiTNode*)malloc(sizeof(BiTNode));
    T->lchild->rchild->data = 5;
    T->lchild->rchild->lchild = NULL;
    T->lchild->rchild->rchild = NULL;
    T->rchild->data = 1;
    T->rchild->lchild = (BiTNode*)malloc(sizeof(BiTNode));
    T->rchild->lchild->data = 4;
    T->rchild->lchild->lchild = NULL;
    T->rchild->lchild->rchild = NULL;
    T->rchild->rchild = (BiTNode*)malloc(sizeof(BiTNode));
    T->rchild->rchild->data = 6;
    T->rchild->rchild->lchild = NULL;
    T->rchild->rchild->rchild = NULL;
    T->lchild->lchild->data = 4;
    T->lchild->lchild->lchild = NULL;
    T->lchild->lchild->rchild = NULL;
    
    return T;
}

//入队函数
void EnQueue(BiTNode ** a,BiTNode * node) {
    a[rear++] = node;
}

//出队函数
BiTNode* DeQueue(BiTNode** a) {
    return a[front++];
}

//输出函数
void displayNode(BiTNode * node) {
    printf("%d ",node->data);
}

int main() {
    BiTNode * tree;
    //初始化二叉树
    tree = CreateBiTree(tree);
    BiTNode * p;
    //采用顺序队列，初始化创建队列数组
    BiTree a[20];
    //根结点入队
    EnQueue(a, tree);
    //当队头和队尾相等时，表示队列为空
    while(front < rear) {
        //队头结点出队
        p = DeQueue(a);
        displayNode(p);
        //将队头结点的左右孩子依次入队
        if (p->lchild!= NULL) {
            EnQueue(a, p->lchild);
        }
        if (p->rchild!= NULL) {
            EnQueue(a, p->rchild);
        }
    }
    printf("\n");
    return 0;
}







