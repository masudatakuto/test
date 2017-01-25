#include <stdio.h>
#include <math.h>
//問題２
int calc(int n) {
	float x = 0;
	float x0 = powf(10,-n);
	int i;
	for (i=0; i<pow(10,n); i++) {
		x += x0;
	}
	printf("n=%d: %f\n", n, x);
	return 0;
}

int main() {
	int j;
	for (j=1; j<10; j++){
		calc(j);
	}
	
	return 0;
}