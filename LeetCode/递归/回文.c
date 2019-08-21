#include "stdio.h"
#include "string.h"

int is_palindereme(char *str, int n) {
    printf("Length: %d \n",n);
    printf("%c ----- %c\n", str[0], str[n-1]);
    if(n == 0 || n == 1)
        return 1;
    else{
        //printf("%d, %d\n", str[0], str[n-1]);
        return ((str[0] == str[n-1]) ? is_palindereme(str+1, n-2) : 0);
    }
}


int main() {
    int n, rs;
    char str[50];
    printf("请输入需要判断回文的字符串: ");
    scanf("%s", &str);
    n = (int)strlen(str);
    rs = is_palindereme(str, n);
    printf("%d ", rs);
}


