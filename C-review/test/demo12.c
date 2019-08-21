# include<stdio.h>

// 把560分钟换算成小时和分表示，进行输出
int main(){
	int min = 560;
	int hour = min/60;
	int minute = min%60;
	printf("560分钟=%d小时%d分钟\n", hour, minute);
	return 0;
}
