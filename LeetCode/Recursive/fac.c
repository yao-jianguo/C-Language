# include<stdio.h>

// 用递归实现阶乘

int fac(int n) {
    if(n == 1){
        return n;
    }
    else{

        return n * fac(n-1);
    }
}

int main(){
    printf("10!的结果是：%d\t", fac(10));
    return 0;
}


