#include <stdio.h>
#include <math.h>
//問題１
int calc(float x0, int ind) {
	float x=0;
	int i;
	for (i=0; i<pow(10,ind); i++) {
		x += x0;
	}
	printf("n=10^%d: %f\n",ind , x);
	return 0;
}

int main() {
	float x1 = 1;
	float x2 = 0.1;
	float x3 = 0.15625;
	
	printf("x=1:\n");
	calc(x1,2);
	calc(x1,5);
	calc(x1,8);
	printf("\nx=0.1:\n");
	calc(x2,2);
	calc(x2,5);
	calc(x2,8);
	printf("\nx=0.15625:\n");
	calc(x3,2);
	calc(x3,5);
	calc(x3,8);
	
	return 0;
}