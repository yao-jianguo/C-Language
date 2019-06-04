#include <stdio.h>

// 第一种定义：使用 #define 关键字
#define LENGTH 10
#define WIDTH  5
#define NEWLINE '\n'

int main() {

    int area;

    area = LENGTH * WIDTH;
    printf("value of area : %d", area);
    printf("%c", NEWLINE);

    // 第二种定义：使用 const 关键字
    const int  LENGTH1 = 10;
    const int  WIDTH1 = 5;
    const char NEWLINE1 = '\n';

    area = LENGTH1 * WIDTH1;
    printf("value of area : %d", area);
    printf("%c", NEWLINE1);

    return 0;
}


