#include<stdio.h>

/*

N名学生的成绩已在主函数中放入一个带头节点的列表当中，h指向链表的头节点
编写函数fun,它的功能是：求出平均分，由函数值返回。
*/

#include<stdlib.h>
#include<stdio.h>

#define N 8

struct slist
{ 
	double s;
  	struct slist *next;
};
typedef struct slist STREC;

double fun(STREC *h)
{

  	double av = 0.0;
  	STREC *p = h->next;     /*p直接指向“头结点”的下一个结点，即第一个成绩*/
  	while(p != NULL)
    {
    	av = av + p->s;       /*求总分数*/
     	p = p -> next;
    }
  	return av/N;          /*返回平均值*/
}

STREC *creat(double *s)   /*创建链表*/
{ 
  	STREC *h, *p, *q; 
  	int i = 0;
  	h = p = (STREC*)malloc(sizeof(STREC));   // h记录改列表的起始位置，一直都不变
 	p->s = 0;
  	while(i < N)
    {
    	q = (STREC*)malloc(sizeof(STREC));
     	q->s = s[i];
     	i++;
     	p->next = q;
     	p = q;
    }
  	p->next = 0;
  	return h;
}

void outlist(STREC *h)
{ 
  	STREC *p;
  	p = h->next; 
  	printf("head");
  	do
    {
    	printf("->%4.1f ", p->s);
     	p = p->next;         /*输出各成绩*/
    } while(p != 0);
}

int main()
{
	FILE *wf;
	double s[N]={85,76,69,85,91,72,64,87}, ave;
	STREC *h; 
	h=creat(s); 
	outlist(h);
	ave=fun(h);
	printf("ave=%6.3f\n ",ave);
	/******************************/
	wf=fopen("out.dat","w");
	fprintf(wf,"%6.3f",ave);
	fclose(wf);
	/******************************/
}



