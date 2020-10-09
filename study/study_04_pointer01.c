#include<stdio.h>

void func(int* p, int num);

void main(void) {
	int arr[] = { 10, 20, 30 };
	func(arr , sizeof(arr)/sizeof(int));
}

void func(int* p, int num) {
	for (int i = 0; i < num; i++) {
		printf("%d %d \n", p[i], *(p + i));
	}
}