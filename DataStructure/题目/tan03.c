#include<stdio.h>
#include<string.h>

void copy_string(char *str1, char *str2);
int main()
{
	char str1[]="I love C!";
	char str2[strlen(str1)];
	copy_string(str1, str2);

	printf("%s\n", str1);
	printf("%s\n", str2);
	return 0;
}

void copy_string(char *str1, char *str2){
	while((*str2++ = *str1++)!='\0');
}