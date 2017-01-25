#include <stdio.h>
#include <math.h>
//問題３
int calc1(int n) {
	int x;
	x = powf(2, n);
	
	printf("n=%d: %d\n", n, x);
	return 0;
}

int calc2(int n) {
	float y;
	y = powf(2, -n);
	
	printf("n=%d: %e\n", n, y);
	return 0;
}

int main() {
	int j;
	
	for (j=1; j<=256; j++){
		calc1(j);
	}
	printf("\n");
	
	for (j=1; j<=256; j++){
		calc2(j);
	}
	
	return 0;
}