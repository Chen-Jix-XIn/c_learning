#include<stdio.h>

void butler(int b,int c);

int main(){
	int a, b, c;
	a=1;
	b=2;
	c=3;
	printf("I'm the No. %d.\n",a);
	printf("Who is the No. %d.\n",b);
	butler(b, c);
	printf("OK!");
	return 0;
}
void butler(int b,int c){
	printf("Sorry sir!\n");
	printf("I don't know the No. %d,but I know the No. %d.\n",b,c);
}
