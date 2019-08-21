#include<stdio.h>

void main(){
	FILE *fp;
	fp= fopen("f1.txt", "w");
	fprintf(fp, "abc");
	fclose(fp);
}
