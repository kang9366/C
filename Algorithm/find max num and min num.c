#include<stdio.h>

int main(void) {
	int arr[12] = { 35, 40, 3, 5, 20, 45, 24, 17, 30, 2, 31, 12 }; //숫자가 들어있는 배열
	int max = arr[0]; //가장 큰 수를 넣어줄 변수
	int min = arr[0]; //가장 작은 수를 넣어줄 변수
	int cnt = 0; //5의 배수이면서 2와 나누어 떨어지는 수의 개수를 저장하는 변수

	printf("2의 배수이면서 5의 배수인 수 : ");

	//짝수이면서 5의 배수인 숫자를 찾는 반복문
	for (int i = 0; i < sizeof(arr)/sizeof(int); i++){
		//arr[i]가 5의 배수이면서 2와 나누어 떨어지면(짝수이면) cnt가 1씩 중가하고 그 수를 출력하는 조건문
		if ((arr[i] % 5 == 0) && (arr[i] % 2 == 0)){
			cnt++;
			printf("%d, ", arr[i]);
		}
	}
	printf("\n개수 : %d", cnt);

	//가장 큰 수를 찾는 반복문
	for (int i = 0; i < (sizeof(arr) / sizeof(int)) - 1; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	//가장 작은 수를 찾는 반복문
	for (int i = 0; i < (sizeof(arr) / sizeof(int)) - 1; i++){
		if (arr[i] < min) {
			min = arr[i];
		}
	}
		printf("\n가장 큰 수 : %d", max);
		printf("\n가장 작은 수 : %d\n", min);
}