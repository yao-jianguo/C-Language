# include<stdio.h>

int main(){
	int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, *p = a, i = 0; 
	printf("%p\n", a);
	printf("%p\n", &a);
	printf("%p\n", p);
	printf("%d\n", *p);

	// printf("%p\n", &(a+1));
	// printf("%p\n", a++);
	printf("%p\n", &p);
	printf("%p\n", &p[i]);
}
