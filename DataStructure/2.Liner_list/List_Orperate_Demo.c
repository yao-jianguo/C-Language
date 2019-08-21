#include <stdio.h>
#include <stdlib.h>
#define Size 5

typedef struct Table{
    int * head;
    int length;  // 当前长度
    int size;    // 当前分配的存储容量，以sizeof(element)为单位
}table;

table initTable()
{
    table t;
    t.head = (int*)malloc(Size*sizeof(int));
    if(!t.head)
    {
        printf("空间申请失败！\n");
        exit(0);
    }
    t.length = 0;  //空表的长度初始化为0
    t.size = Size; //空表的初始存储空间为Size
    return t;
}
 
//插入函数，其中，elem为插入的元素，add为插入到顺序表的位置
table addEleToTable(table t, int elem, int add)
{
    int i = 0;
    // 判断位置问题
    if(add > t.length +1 || add < 1)
    {
        printf("要插入元素的位置有问题！\n");
        return t;
    }
    // 检查是否有多余的空间，否则，需要申请新的内存空间
    if(t.length >= t.size)  //??????????
    {
        t.head = (int *)realloc(t.head, (t.size+1)*sizeof(int));
        if(!t.head)
        {
            printf("存储分配失败！");
        }
        t.size++;
    }
    // 1 2 3 4 
    printf("%d\n", t.length);
    for (i = t.length - 1; i >= add; --i)
    {
        t.head[i+1] = t.head[i];
    }
    t.head[i+1] = elem;
    t.length++;
    t.size++;
    return t;
}

table delEleFromTable(table t,int add)
{
    // 1. 找出元素并且删除
    // 2. 使得列表的长度减1
    int i = 0;
    for (i = 0; i < Size; ++i)
    {
        if(t.head[i] == add)
            break;
    }
    for ( ; i < Size - 1; ++i)
    {
        t.head[i] = t.head[i+1];
    }
    t.length --;
    t.size -- ;
    return t;
}

int selectEleFromTable(table t,int elem)
{
    for (int i = 0; i <= t.length; ++i)
    {
       if(t.head[i] == elem)
       {
            return i;
       }
    }
    return -1;
}

//更改函数，其中，elem为要更改的元素，newElem为新的数据元素
table amendTable(table t,int elem,int newElem)
{
    for (int i = 0; i < t.length; ++i)
    {
        if(t.head[i] == elem)
        {
            t.head[i] = newElem;
        }
    }
    return t;
}

void displayTable(table t)
{
    for (int i = 0; i < t.length; ++i)
    {
        printf(" - [%d]", t.head[i]); 
    }     
    printf("\n"); 
}

int main(){
    table t1=initTable();
    for (int i=1; i<=Size; i++) {
        t1.head[i-1]=i;
        t1.length++;
    }
    printf("原顺序表：\n");
    displayTable(t1);
  
    printf("删除元素1:\n");
    t1=delEleFromTable(t1, 1);
    displayTable(t1);
  
    printf("在第2的位置插入元素5:\n");
    t1=addEleToTable(t1, 5, 2);
    displayTable(t1);
  
    printf("查找元素3的位置:\n");
    int add=selectEleFromTable(t1, 3);
    printf("%d\n",add);
  
    printf("将元素3改为6:\n");
    t1=amendTable(t1, 3, 6);
    displayTable(t1);
    return 0;
}


