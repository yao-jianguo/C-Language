#include<stdio.h>
#include<stdlib.h>

typedef struct RLinkList
{
	int elem;
	struct RLinkList *next;
}person;

person* initRLink(int n){
	person * p = (person *)malloc(sizeof(person)); // 注意循环列表中的头结点也要存放元素，让最后的节点指向头结点
	p->elem = 1;
	person* cycle = p;
	for (int i = 0; i < n - 1; ++i)
	{
		person * a = (person *)malloc(sizeof(person)) ;
		a->elem = i+2 ;
		a->next = NULL ;
		cycle->next = a ;
		cycle = cycle->next ;
	}
	cycle->next = p;
	return p;
}

void findAndKillKey(person* cycle, int k, int m){
	// 从第3个人开始报数, 报4个数字
	printf("要出列的人的顺序为:\n");
	person *p = cycle;
	while(p->next->elem != p->elem)  //这里假设所有节点的值都不相同
	{
		// 1 -> 2 -> 3 -> 4 -> 5 -> 6 -> 7 -> 8 -> 9 -> 10 -> 1 -> 2
		for (int i = 0; i < m+k-3; ++i)
		{
			p = p->next;
		}
		printf("出列人的编号为: %d\n", p->next->elem);
		person* del = p->next;
		p->next = p->next->next;
		p = p->next;
		free(del);
	}
}

void display(person *p, int n){
    person *temp = p; //将temp指针重新指向头结点的下一个节点，下一个节点才是列表的第一个节点
    int i = 0;
    while(temp->next)
    {
        printf(" -> %d", temp->elem);
        temp = temp->next;
        if(i++>=n+1)
        	break;
    }   
    printf("\n");
}

int main()
{
	int n = 10 ; // 人数
	int k = 3;   // 从第k个人开始报数
	int m = 4;   // 报数截止的数
	person *p = initRLink(n);
	printf("循环列表的数据有");
	display(p, n);
	findAndKillKey(p, k, m);
	return 0;
}




// 从第3个人开始报数, 报4个数字
// 循环列表的数据有 -> 1 -> 2 -> 3 -> 4 -> 5 -> 6 -> 7 -> 8 -> 9 -> 10 -> 1 -> 2
// 要出列的人的顺序为:
// 出列人的编号为: 6
// 出列人的编号为: 2
// 出列人的编号为: 9
// 出列人的编号为: 7
// 出列人的编号为: 5
// 出列人的编号为: 8
// 出列人的编号为: 1
// 出列人的编号为: 10
// 出列人的编号为: 4













