#include<stdio.h>

int sum(int n);

void main(void) {
	int a, result;
	printf("input your number : ");
	scanf_s("%d", &a);

	result = sum(a);
	printf("1���� %d������ �� : %d�Դϴ�.", a, result);
}

int sum(int n) {
	if(n <= 1){ 
		return 1;
	}else {
		return n + sum(n-1);
	}
		
}