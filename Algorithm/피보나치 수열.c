#include<stdio.h>

int main(void) {
	int arr[20];
	int sum;

	arr[0] = 1; //1���� 1�� ����
	arr[1] = 1; //2���� 1�� ����
	sum = arr[0] + arr[1]; //1�� + 2��
	printf(" %d + %d ", arr[0], arr[1]);

	for (int i = 2; i <= 19; i++) {
		arr[i] = arr[i-1] + arr[i-2]; //�� �װ� �������� ���ؼ� 3�׺��� ���
		sum +=  arr[i]; //���� ����

		printf("+ %d ", arr[i]);
	}
	printf(" = %d\n", sum);
}