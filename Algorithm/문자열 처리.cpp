#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define num 5

int task1(void) {
	char soc[100];
	int length = 0, capital = 0, small = 0;

	//문자열 길이, 대문자 개수, 소문자 개수
	printf("문자열 입력 : ");
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

	//대문자, 소문자로 출력
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

	printf("문자열의 길이는 [%d] 바이트 입니다.\n", length);
	printf("대문자의 개수는 [%d] 이고,\n", capital);
	printf("소문자의 개수는 [%d] 입니다.\n", small);
	printf("대문자로 출력 : %s\n", upper);
	printf("소문자로 출력 : %s", smaller);
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
			printf("■");
		}
		printf(" (%d)\n", arr1[i]);
	}
	return 0;
}

int main(void) {
	task1();
	task2();
}