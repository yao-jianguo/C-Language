#include<stdio.h>
#include<stdlib.h>

#define Size 5  //对Size进行宏定义，表示顺序表申请空间的大小

// 列表struct
typedef struct SqList
{
    int * head; //声明了一个名为head的长度不确定的数组，也叫“动态数组”
    int length; //记录当前顺序表的长度
    int size;   //记录顺序表分配的存储容量
}sqlist;

sqlist initSqList()
{
	sqlist list;
	list.head = (int*)malloc(Size*sizeof(int));
	if(!list.head)
	{
		printf("初始化失败");
		exit(0);
	}
	list.length = 0; //空表的长度初始化为0
    list.size = Size; //空表的初始存储空间为Size
    return list;
}

void showListEle(sqlist list)
{
	for (int i = 0; i < Size; ++i)
	{
		printf(" - [%d]", list.head[i]);
	}
	printf("\n");
}

int main()
{
	sqlist list = initSqList();
	//向顺序表中添加元素
	for (int i = 0; i < Size; ++i)
	{
		list.head[i] = i+1;
		list.length ++;
	}
	printf("分配的元素有 ");
	showListEle(list);
	return 0;
}















