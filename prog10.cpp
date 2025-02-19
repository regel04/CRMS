#include <stdio.h>
int main(){
	const int a=10;
	int b,c,d;
	printf("Original code:");
	b=a*2;
	c=b+a;
	d=c*a;
	printf("b=%d,, c=%d, d=%d\n", b,c,d);
	printf("\n After constant propagation: \n");
	b=10*2;
	c=b+10;
	d=c*10;
	printf("b=%d, c=%d, d=%d\n", b,c,d);
	return 0;

}
