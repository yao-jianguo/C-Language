#include<stdio.h>
#include<string.h>

// 一个数字字符串转换为一个整数
// 例如：若输入字符串“-1234", 则函数把他转换为整数值-1234
int str2int(char *p);

int main(){

	char strnum[20];
	printf("请输入整数类型的字符串: ");
	scanf("%s", strnum);
	printf("输入的字符串数字为:%s\n", strnum);
	
	int res = str2int(strnum);
	printf("转换为整数为:%d\n", res);
	
}

int str2int(char *p){

	int n = 0; //最后得到的整数
	int alpha = 1;
	int strlength = strlen(p);
	// 判断正负
	if(p[0] == '-'){
		for(int i = strlength-1; i>0; i--){
			n = n + (p[i]-48) * alpha;
			alpha = alpha * 10;
		}
		n = -n;
	}
	else{
		for(int i = strlength - 1; i>=0; i--){
			n = n + (p[i]-48) * alpha;
            alpha = alpha * 10;
		}
	}
	printf("整数为:%d\n", n);

	return n;
}