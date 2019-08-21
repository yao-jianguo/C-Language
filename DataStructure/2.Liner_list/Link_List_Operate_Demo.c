#include <stdio.h>
#include <stdlib.h>

typedef struct Link{
    int  elem;
    struct Link *next;
}link;

link * initLink();
//链表插入的函数，p是链表，elem是插入的结点的数据域，add是插入的位置
link * insertElem(link * p,int elem,int add);
//删除结点的函数，p代表操作链表，add代表删除节点的位置
link * delElem(link * p,int add);
//查找结点的函数，elem为目标结点的数据域的值
int selectElem(link * p,int elem);
//更新结点的函数，newElem为新的数据域的值
link *amendElem(link * p,int add,int newElem);
void display(link *p);


int main() {
    //初始化链表（1，2，3，4）
    printf("初始化链表为：\n");
    link *p=initLink();
    display(p);
  
    printf("在第4的位置插入元素5：\n");
    p=insertElem(p, 5, 4);
    display(p);
  
    printf("删除元素3:\n");
    p=delElem(p, 3);
    display(p);
  
    printf("查找元素2的位置为：\n");
    int address=selectElem(p, 2);
    if (address==-1) {
        printf("没有该元素");
    }else{
        printf("元素2的位置为：%d\n",address);
    }
    printf("更改第3的位置上的数据为7:\n");
    p=amendElem(p, 3, 7);
    display(p);
  
    return 0;
}

link * initLink(){
    link *p = (link*)malloc(sizeof(link)); // 创建一个头结点, p只用来表示头结点
    link *temp = p; //声明一个指针指向头结点，用于遍历链表
    for (int i = 0; i < 5; ++i)
    {
        link *a = (link *)malloc(sizeof(link));
        a->elem = i + 1; 
        a->next = NULL;
        temp->next = a; 
        temp = temp->next;
    }
    return p;
}

link * insertElem(link * p, int elem, int add){
    link* temp = p->next;
    int i = 1; 
    while(add >= i++ && temp->next)
    {
        if(add == i)
        {
            link* a = malloc(sizeof(link));
            a->elem = elem;
            a->next = temp->next;
            temp->next = a;
        }
        temp = temp->next;
    }
    return p;
}

//删除元素值为3的节点
link * delElem(link * p,int add){
    link* temp = p; //需要记录要被删元素的前一个节点的信息
    while(temp->next)
    {
        if(temp->next->elem == add)
        {
            link* del = temp->next;
            temp->next = temp->next->next;
            free(del); //手动释放该结点，防止内存泄漏
        }
        temp = temp->next;
    }
    return p;
}

int selectElem(link * p,int elem){
    link* temp = p;
    int loc = 0;

    while(temp->next){
        loc++;
        if(temp->next->elem == elem){
            printf("%d\n", loc);
            return loc;
        }
        temp = temp->next;
    }
    return -1;

}

link *amendElem(link * p,int add,int newElem){
    link* temp = p->next;
    for (int i = 0; i < add; ++i)
    {
        // 更改第3的位置上的数据为7
        if(i+1 == add){
            temp->elem = newElem;
        }
        temp = temp->next;
    }
    return p;
}

void display(link *p){
    link *temp = p->next; //将temp指针重新指向头结点的下一个节点，下一个节点才是列表的第一个节点
    while(temp->next)
    {
        printf(" -> %d", temp->elem);
        temp = temp->next;
    }   
    printf("\n");
}





















