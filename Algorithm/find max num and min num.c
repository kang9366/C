#include<stdio.h>

int main(void) {
	int arr[12] = { 35, 40, 3, 5, 20, 45, 24, 17, 30, 2, 31, 12 }; //���ڰ� ����ִ� �迭
	int max = arr[0]; //���� ū ���� �־��� ����
	int min = arr[0]; //���� ���� ���� �־��� ����
	int cnt = 0; //5�� ����̸鼭 2�� ������ �������� ���� ������ �����ϴ� ����

	printf("2�� ����̸鼭 5�� ����� �� : ");

	//¦���̸鼭 5�� ����� ���ڸ� ã�� �ݺ���
	for (int i = 0; i < sizeof(arr)/sizeof(int); i++){
		//arr[i]�� 5�� ����̸鼭 2�� ������ ��������(¦���̸�) cnt�� 1�� �߰��ϰ� �� ���� ����ϴ� ���ǹ�
		if ((arr[i] % 5 == 0) && (arr[i] % 2 == 0)){
			cnt++;
			printf("%d, ", arr[i]);
		}
	}
	printf("\n���� : %d", cnt);

	//���� ū ���� ã�� �ݺ���
	for (int i = 0; i < (sizeof(arr) / sizeof(int)) - 1; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	//���� ���� ���� ã�� �ݺ���
	for (int i = 0; i < (sizeof(arr) / sizeof(int)) - 1; i++){
		if (arr[i] < min) {
			min = arr[i];
		}
	}
		printf("\n���� ū �� : %d", max);
		printf("\n���� ���� �� : %d\n", min);
}