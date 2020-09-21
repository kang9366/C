#include <stdio.h>

int add(int a, int b);
int main() {
	int(*fpt)(int a, int b);
	int a, b, sum;
	a = 10;
	b = 20;
	fpt = add;
	sum = fpt(a, b);
	printf("sum= %d \n", sum);
	return 0;
}

int add(int a, int b) {
	return a + b;
}

int multifly(int a, int b){
	return a * b;
}
