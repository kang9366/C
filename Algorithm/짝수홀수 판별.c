#include<stdio.h>

int main(void) {
	int num = 0;
	int num1[3];
	printf("3�ڸ� �������� �Է��ϼ��� : ");
	scanf_s("%d", &num);
	
	num1[0] = num / 100;
	num1[1] = (num - (100*num1[0])) / 10 ;
	num1[2] = num - (100 * num1[0] + 10 * num1[1]);
	for (int i = 0; i < sizeof(num1)/sizeof(int); i++){
		if (num1[i] % 2 == 0) {
			printf("%d : ¦�� ", num1[i]);
		}else if (num1[i] % 2 ==! 0) {
			printf("%d : Ȧ�� ", num1[i]);
		}
	}

}