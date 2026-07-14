#include<stdio.h>
int main(void){
	int a, b;
	a = 5;
	b = 2;
	b = a;//此时b的原始值丢失
	a = b; //此时在gdb中分别print a、b，发现两者的值均为5
	printf("%d %d\n", b, a);       
	return 0;
}
