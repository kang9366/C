#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define num 5

int task1(void) {
	char soc[100];
	int length = 0, capital = 0, small = 0;

	//���ڿ� ����, �빮�� ����, �ҹ��� ����
	printf("���ڿ� �Է� : ");
	scanf("%[^\n]s", soc);

	for (int i = 0; soc[i]; i++) {
		length += 1;
		if ('A' <= soc[i] && soc[i] <= 'Z') {
			capital++;
		}
		else if ('a' <= soc[i] && soc[i] <= 'z') {
			small++;
		}
	}		

	//�빮��, �ҹ��ڷ� ���
	char upper[100], smaller[100];
	char chr1, chr2;

	for (int i = 0; i < sizeof(soc) / sizeof(soc[0]); i++) {
		upper[i] = soc[i];
		smaller[i] = soc[i];
	}

	for (int i = 0; soc[i] != '\0'; ++i) {
		chr1 = upper[i];
		chr2 = smaller[i];
		if ('a' <= chr1 && chr1 <= 'z') {
			upper[i] = chr1 + 'A' - 'a';
		}else if ('A' <= chr1 && chr1 <= 'Z') {
			smaller[i] = chr2 + 'a' - 'A';
		}
	}

	printf("���ڿ��� ���̴� [%d] ����Ʈ �Դϴ�.\n", length);
	printf("�빮���� ������ [%d] �̰�,\n", capital);
	printf("�ҹ����� ������ [%d] �Դϴ�.\n", small);
	printf("�빮�ڷ� ��� : %s\n", upper);
	printf("�ҹ��ڷ� ��� : %s", smaller);
	return 0;
}

int task2(void) {
	printf("\n=============================================\n");
	int arr1[5] = {5000, 15000, 2000, 7000, 10000};
	int arr2[num];

	for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++) {
		arr2[i] = arr1[i] / 1000;
		printf("[%d]", i);
		for (int j = 0; j < arr2[i]; j++) {
			printf("��");
		}
		printf(" (%d)\n", arr1[i]);
	}
	return 0;
}

int main(void) {
	task1();
	task2();
}