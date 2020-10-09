#include<stdio.h>

int num, cnt, kor_sum, eng_sum, math_sum;
double kor_avg, eng_avg, math_avg;

struct student{
	char* name[30];
	int korean[10];
	int english[10];
	int math[10];
	int sum[10];		
	double average[10];
	char score[10];
};

typedef struct student STUDENT;
STUDENT s[10];

//������ �Է¹ޱ�
int input_data(void) {
	printf("�ο� �� : ");
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		printf("\n[%d]\n", i+1);
		printf("1.�̸� : ");
		scanf("%s", &s[i].name[i]);
		printf("2.���� : ");
		scanf("%d", &s[i].korean[i]);
		if (s[i].korean[i] > 100) {
			printf("�߸� �Է��ϼ̽��ϴ�.");
			break;
		}
		printf("3.���� : ");
		scanf("%d", &s[i].english[i]);
		if (s[i].english[i] > 100) {
			printf("�߸� �Է��ϼ̽��ϴ�.");
			break;
		}
		printf("4.���� : ");
		scanf("%d", &s[i].math[i]);
		if (s[i].math[i] > 100) {
			printf("�߸� �Է��ϼ̽��ϴ�.");
			break;
		}
	}
	return 0;
}

int calculate_data(void) {
	//���� ���
	for (int i = 0; i < num; i++){
		s[i].sum[i] = s[i].korean[i] + s[i].english[i] + s[i].math[i];
	}
	//��� ���
	for (int i = 0; i < num; i++){
		s[i].average[i] = (double)s[i].sum[i] / 3;
	}
	//���� ��� ���
	for (int i = 0; i < num; i++){
		kor_sum += s[i].korean[i];
		eng_sum += s[i].english[i];
		math_sum += s[i].math[i];
	}
	kor_avg = (double)kor_sum / num;
	eng_avg = (double)eng_sum / num;
	math_avg = (double)math_sum / num;
	//���� ���
	for (int i = 0; i < num; i++){
		if (s[i].average[i] >= 90 && s[i].average[i] <= 100) {
			s[i].score[i] = 'A';
		}else if(s[i].average[i] >= 80 && s[i].average[i] < 90){
			s[i].score[i] = 'B';
		}
		else if (s[i].average[i] >= 70 && s[i].average[i] < 80) {
			s[i].score[i] = 'C';
		}
		else if (s[i].average[i] >= 60 && s[i].average[i] < 70) {
			s[i].score[i] = 'D';
		}else {
			s[i].score[i] = 'F';
		}
	}
	return 0;
}

int table(void) {
	printf("\n--------------------------------------------------------------------------------\n   ��ȣ      �̸�      ����      ����      ����      ����      ���      ����");
	for (int i = 0; i < num; i++){
		cnt++;
		printf("\n--------------------------------------------------------------------------------\n    %d       %s      %d        %d        %d       %d      %g      %c",	
			cnt, &s[i].name[i], s[i].korean[i], s[i].english[i], s[i].math[i], s[i].sum[i], s[i].average[i], s[i].score[i]);
	}
	printf("\n--------------------------------------------------------------------------------\n");
	return 0;
}

int graph(void) {
	//���� ������� �׷���
	printf("1) ���� ��� ���� : ");
	for (int i = 0; i < (int)(kor_avg / 10); i++) {
		printf("��");
	}
	printf("(%g)\n", kor_avg);
	//���� ������� �׷���
	printf("2) ���� ��� ���� : ");
	for (int i = 0; i < (int)(eng_avg / 10); i++) {
		printf("��");
	}
	printf(" (%g)\n", eng_avg);
	//���� ������� �׷���
	printf("3) ���� ��� ���� : ");
	for (int i = 0; i < (int)(math_avg / 10); i++) {
		printf("��");
	}
	printf(" (%g)\n", math_avg);

	return 0;
}

int main(void) {
	input_data();
	calculate_data();
	table();
	graph();
}