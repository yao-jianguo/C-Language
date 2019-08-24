#include <stdio.h>
#include <stdlib.h>
#define keyType int

// 折半查找，元素本身有序

typedef struct {
    keyType key;//查找表中每个数据元素的值
    //如果需要，还可以添加其他属性
}ElemType;

typedef struct{
    ElemType *elem;//存放查找表中数据元素的数组
    int length;//记录查找表中数据的总数量
}SSTable;

//创建查找表
void Create(SSTable **st,int length){
    (*st) = (SSTable *)malloc(sizeof(ElemType));
    (*st)->length = length;
    // 给数组elem申请length长度的内存空间
    (*st)->elem = (ElemType *)malloc(length * sizeof(ElemType));
    printf("输入查找表中的内容:\n");
    for (int i = 1; i <= length; ++i)
    {
        scanf("%d",&((*st)->elem[i].key));
    }
}

//查找表查找的功能函数，其中key为关键字
int Search_Bin(SSTable *st, keyType key){
    int low = 1; 
    int high = st->length;
    int mid = 0;
    while(low < high){
        mid = (low + high)/2;
        if(st->elem[mid].key == key){ return mid; }
        else if(st->elem[mid].key < key) { high = mid - 1; }
        else { low = mid + 1; }
    }
    return 0;

}

int main(int argc, const char * argv[]) {
    SSTable *st;
    Create(&st, 6);
    getchar();
    printf("输入要查找的元素的关键字:\n");
    int key;
    scanf("%d", &key);
    int pos = Search_Bin(st, key);
    if(pos == 0) {
        printf("顺序表中未发现该关键字！\n");
    } else {
        printf("关键字位置为: %d\n", pos);
    }
}



























