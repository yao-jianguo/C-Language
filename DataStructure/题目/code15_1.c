#include<stdio.h>
#include<stdlib.h>


/*
	N名学生的成绩已在主函数中放入一个带头节点的列表当中，h指向链表的头节点
	编写函数fun,它的功能是：求出平均分，由函数值返回。
*/
#define N 8

struct slink
{
	double s;
	struct slink *next;
};
typedef struct slink STREC;

double avg_score(STREC *sc)
{
	double sum = 0.0;
	int i = -1;
	while(sc->next != 0)
	{
		sum += sc->s;
		sc = sc->next;
		i++;
	}
	printf("%f\n", sum);
	printf("%d\n", i);
	return (double)(sum/i);
}

STREC *create_slink(double *sc)
{
	STREC *p, *q, *h;
	int i = 0;
	h = p = (STREC*)malloc(sizeof(STREC));
	p->s = 0; 
	while(i <= N)
	{
		q = (STREC*)malloc(sizeof(STREC));
		q->s = *(sc+i);
		p->next = q;
		p = q;
		i++;
	}
	p->next = 0;
	return h;
}

int main()
{
	double score[] = {90, 56, 23, 86, 65, 92, 89, 100}, avg;
	STREC *snode, *p;
	snode = create_slink(score);
	p = snode->next;
	printf("head ");
	while(p->next!= 0)
	{
		printf("-> %4.2f ", p->s);
		p = p -> next;
	}
	printf("\n");
	avg = avg_score(snode);
	printf("平均分数是:%.2f\n", avg);

	return 0;
}