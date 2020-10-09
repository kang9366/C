#define PRT(x) printf(#x" = %d", x)
#include<stdio.h>

int main(void) {
	int num = 10;
	PRT(num);
}