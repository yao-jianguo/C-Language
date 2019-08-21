#include<stdio.h>

int main(){
	FILE *fp = NULL; 

	fp = fopen("./test.txt","a+");
	int a = fprintf(fp, "This is a test for fprintf...\n");
	int b = fputs("This is a test for fputs...\n", fp);
	fclose(fp);
	printf("a=%d\tb=%d\n", a, b);
}
