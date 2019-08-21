#include<stdio.h>

int main(){
	char ch[12]={"Hello World!"};
	printf("%s\n", ch);
	printf("%lu\n",sizeof('!'));
	ch[1] = 'o';
	printf("%s\n", ch); 
	return 0;
}
