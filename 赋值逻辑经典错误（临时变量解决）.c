#include<stdio.h>
int main(void){
	int a, b;
	a = 5;
	b = 2;
	
	int t;
	t = b;
	b = a;	 
	a = t; 
	printf("%d %d\n", b, a);       
	return 0;
}
