#include<stdio.h>

int StrToInt(const char *str)
{
    int n = 0;
    while (*str != 0)
    {
        int c = *str - '0';
        n = n * 10 + c;
        ++str;
    }
    return n;
}

int main(){
	int n = StrToInt("123");
	printf("%d\n", n);

	printf("%d\n", 'c'-'b');

	printf('%d\n','1');
	printf('%d\n','2');
	printf('%d\n','3');
	printf('%d\n','4');
	printf('%d\n','5');
}
