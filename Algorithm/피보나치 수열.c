#include<stdio.h>

int main(void) {
	int arr[20];
	int sum;

	arr[0] = 1; //1항을 1로 설정
	arr[1] = 1; //2항을 1로 설정
	sum = arr[0] + arr[1]; //1항 + 2항
	printf(" %d + %d ", arr[0], arr[1]);

	for (int i = 2; i <= 19; i++) {
		arr[i] = arr[i-1] + arr[i-2]; //전 항과 전전항을 더해서 3항부터 계산
		sum +=  arr[i]; //합의 누적

		printf("+ %d ", arr[i]);
	}
	printf(" = %d\n", sum);
}