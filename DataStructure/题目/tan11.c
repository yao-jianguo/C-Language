#include<stdio.h>

int main()
{
	int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
	printf("%d\n", *arr);
	printf("%d\n", arr[0]);
	printf("%d\n", arr);
	printf("%d\n", arr+1);
	printf("%d\n", *(arr+1));
	printf("%d\n", *(arr+2));
	printf("==============");
	printf("%d\n", *(arr+1)+1);
	printf("%d\n", &*(arr+1)+1);
	printf("%d\n", *(arr+1)+2);
	printf("%d\n", &*(arr+1)+2);
	printf("%d\n", *(arr+1)+3);
	printf("%d\n", &*(arr+1)+3); // 是以arr+1所在列取所在行 然后+3 -> 往下走三行的首位
	return 0;
}


1039256256
1039256256
1039256256
1039256272
1039256272
1039256288
==============
1039256276  72 + 16
1039256288
1039256280
1039256304
1039256284
1039256320