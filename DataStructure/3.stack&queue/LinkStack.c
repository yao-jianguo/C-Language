#include<stdio.h>
#include<stdlib.h>

/*
1.栈开始状态: head -> NULL
2.入栈元素1 : head -> 1 -> NULL
3.入栈元素2 : head -> 2 -> 1 -> NULL
4.入栈元素3 : head -> 3 -> 2 -> 1 -> NULL
5.入栈元素4 : head -> 4 -> 3 -> 2 -> 1 -> NULL
*/

typedef struct LinkStack{
	int elem; 
	struct LinkStack * next;
}linkstack;

linkstack * push(linkstack * head, int n){
	printf("哈哈哈");
	linkstack * a = (linkstack *)malloc(sizeof(linkstack));
	a->elem = n;
	a->next = NULL;
	printf("哈哈哈");

	if(head->next == NULL){
		head->next = a;
	}
	else if(head->next){
		a->next = head->next; 
		head->next = a;
	}
	printf("元素%d成功入栈!\n", n);
	return head;
}

linkstack * pop(linkstack * head){
	linkstack * temp = head;
	if(temp->next){
		printf("弹出的元素是: %d", temp->next->elem);
		temp -> next = temp->next->next;
	}
	else
		printf("空栈\n");
	return head;
}

int main(){
	linkstack * s = NULL;
	s = push(s, 10);
	// s = pop(s);
	return 0;
}
