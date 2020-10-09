#include<stdio.h>

int main(void) {
	int num = 0;
	int num1[3];
	printf("3자리 십진수를 입력하세요 : ");
	scanf_s("%d", &num);
	
	num1[0] = num / 100;
	num1[1] = (num - (100*num1[0])) / 10 ;
	num1[2] = num - (100 * num1[0] + 10 * num1[1]);
	for (int i = 0; i < sizeof(num1)/sizeof(int); i++){
		if (num1[i] % 2 == 0) {
			printf("%d : 짝수 ", num1[i]);
		}else if (num1[i] % 2 ==! 0) {
			printf("%d : 홀수 ", num1[i]);
		}
	}

}