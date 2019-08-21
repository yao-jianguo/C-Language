#include<stdio.h>

// 只有一个top指正来确定栈顶元素的操作是push还是pop
int push(int* s, int top, int elem){
	s[++top] = elem;
	return top; // 返回栈顶元素
}

int pop(int* s, int top){
	if(top == -1){
		printf("空栈 The Stack is empty!\n");
		return -1;
	}
	printf("弹出栈顶元素:%d\n", top[s]);
	return --top;
}


int main()
{
	int elem[100];
	int top = -1; 
	top = push(elem, top, 10);
	top = push(elem, top, 20);
	top = push(elem, top, 30);
	top = push(elem, top, 40);
	top = push(elem, top, 50);
	top = pop(elem, top);
	top = pop(elem, top);
	top = pop(elem, top);
	top = pop(elem, top);
	top = pop(elem, top);
	top = pop(elem, top);
	return 0;
}