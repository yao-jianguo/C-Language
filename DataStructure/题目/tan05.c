#include<stdio.h>
#include<string.h>

int main(){
	char *names[]={"one", "two", "three", "four", "five"};
	char **p;
	for(int i = 0; i < 5; i++){
		p = names + i;
		printf("%s\n", *p);
	}
	
	printf("============\n");
        
	for(int i = 0; i < 5; i++){
                p = names + i;
		for(int j=0; j < strlen(*p); j++){
			printf("%c ", **p++);
		}
                printf("\n");
        }	
	return 0;
}
