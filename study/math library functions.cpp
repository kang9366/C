#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#include<Windows.h>
int task1(void) {
	srand(time(NULL));
	for (int i = 0; i < 5; i++) {
		printf("����%d : %d\n", i + 1, rand()%1000);
	}
	return 0;
}

int task2(void) {
	printf("========================================\n");
	float num1;
	printf("���ڸ� �Է����ּ��� : ");
	scanf("%f", &num1);
	printf("ceil(�ø�) : %f\nfloor(����) : %f", ceil(num1), floor(num1));

    return 0;
}

int task3(void){
	printf("\n========================================\n");
	int num2;
	int num3;
	printf("���ڸ� �Է����ּ��� : ");
	scanf("%d", &num2);
	printf("������ �Է����ּ��� : ");
	scanf("%d", &num3);
	int result_pow = pow(num2, num3);
	int result_sqrt = sqrt(num2);
	printf("pow(����) : %d\nsqrt(������) : %d\n", result_pow, result_sqrt);
	return 0;
}
int task4(void){
	printf("\n========================================\n");

	int num4;
	printf("1. cls\n2. dir\n3. date\n4. time\n�Է� : ");
	scanf("%d", &num4);
	if (num4 == 1) {
		system("cls");
	}else if (num4 == 2) {
		system("dir");
	}else if (num4 == 3) {
		system("date");
	}else if (num4 == 4) {
		system("time");
	}
	return 0;
}
int main(void) {
	task1();
	task2();
	task3();
	//task4();
}