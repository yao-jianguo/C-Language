#include <stdio.h>
#include <string.h>

int main(void)
{
    /*字符数组赋初值*/
    char cArr[] = {'I','L','O','V','E','C'};
    /*字符串赋初值*/
    char sArr[] = "ILOVEC";
    /*用sizeof（）求长度*/
    printf("cArr的sizeof=%lu\n", sizeof(cArr));
    printf("sArr的sizeof=%lu\n", sizeof(sArr));
    /*用strlen（）求长度*/
    printf("cArr的strlen=%lu\n", strlen(cArr));
    printf("sArr的strlen=%lu\n", strlen(sArr));
    /*用printf的%s打印内容*/
    printf("cArr的内容=%s\n", cArr);
    printf("sArr的内容=%s\n", sArr);

    printf("===============================\n");
    int arr[][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int *a = arr[0];
    for (int i = 0; i < 9; ++i)
    {
    	printf("%d ", *a);
    	a++;
    }


    printf("\narr[0][1] = %d\n", *(*(arr+0)+1));
    printf("\narr[1][1] = %d\n", *(arr[1]+1));
    printf("\narr[1][1] = %d\n", *(*(arr+1)+1));

    printf("=====================\n");
    unsigned char c = 97;
    printf("%d %c\n",c, c);

    int n = 12; 
    n += n-= n+1;  // -2
    printf("%d\n", n);
    return 0;
}
