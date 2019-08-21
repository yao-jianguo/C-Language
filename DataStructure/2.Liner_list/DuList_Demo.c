#include <stdio.h>
#include <stdlib.h>

// 节点结构
typedef struct line
{
    struct dlink * prior;
    int data;
    struct dlink * next;
}dlink;

dlink *initDLink(dlink * link){
    link = (dlink *)malloc(sizeof(dlink));
    link->next = NULL;
    link->prior = NULL;
    link->data = 1;
    dlink * temp = link;

    for (int i = 2; i <= 5; ++i)
    {
        dlink * a = (dlink *)malloc(sizeof(dlink));
        a->prior = NULL;
        a->next = NULL;
        a->data = i;

        temp->next = a;
        a->prior = temp;
        temp = temp->next;
    }
    return link;
}

void display(dlink * link){
    dlink * temp = link;
    dlink * temp1 = link;
    printf("正向: ");
    while(temp){
        printf(" -> %d", temp->data);
        temp1 = temp;  // 记录最后一个节点，以便下面进行向前展示。否则，指向最后一个节点的下一个节点是没有prior的
        temp = temp->next;
    }
    printf("\n");

    printf("反向: ");
    while(temp1){
        printf(" -> %d", temp1->data);
        temp1 = temp1->prior;
    }
    printf("\n");
}

int main()
{
    dlink * link = NULL;
    // 初始化列表
    link = initDLink(link);
    display(link);
    return 0;
}












