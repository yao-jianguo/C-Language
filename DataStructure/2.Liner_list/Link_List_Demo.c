#include<stdio.h>
#include<stdlib.h>

//链表中节点的结构
typedef struct Link{
    int elem;
    struct Link *next;
}link;

//初始化链表的函数
link * initLink();
//用于输出链表的函数
void display(link *p);

int main()
{
	link *p = initLink();
	display(p);
	return 0;
}

//初始化链表的函数
link * initLink()
{
	link * p = NULL; 
	link * temp = (link *)molloc(sizeof(link))

	temp.elem = 1; 
	temp.next = NULL;
	for (int i = 2; i < 5; ++i)
	{
		link *a = (link *)molloc(sizeof(link));
		a->elem=i;
        a->next=NULL;
        temp->next = a;
        temp = temp->next;
	}
	return p;
}


//用于输出链表的函数
void display(link *p)
{
	link * temp = p;
	while(temp)
	{
		printf(" -> %d\n", temp->elem);
		temp = temp->next;
	}
	printf("\n");
}




