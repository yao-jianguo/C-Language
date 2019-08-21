#include<stdio.h>

// 将M行N列的二维数组中的字符数据，按列的顺序一次方法哦一个字符串中
/** 
例如：二维数组中的数据为
W W W W 
S S S S 
H H H H 
那么，输出结果为 WSHWSHWSHWSH
**/

void func(char (*p)[3], int v_len);

int main(){
	// W S C R F V T G B Y H N
	char arr[4][3] = {{'W', 'S', 'C'}, {'R', 'F', 'V'}, {'T', 'G', 'B'}, {'Y', 'H', 'N'}};
	int v_len = sizeof(arr)/sizeof(arr[0]); //数组行长度*****
	int h_len = sizeof(arr[0])/sizeof(arr[0][0]); //数组列长度*****
	printf("行%d, 列%d\n", v_len, h_len);
	func(arr, v_len);
	return 0;
}

void func(char (*p)[3], int v_len){
	int i, j;
	// 行： v_len ; 列： 3
	int h_len = 3;
	for(i = 0; i < h_len; ++i){ // 先列
		for (int j = 0; j < v_len; ++j){ // 后行
			printf("%c ", p[j][i]);
		}
	}
	printf("\n");
}