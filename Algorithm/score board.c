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

//데이터 입력받기
int input_data(void) {
	printf("인원 수 : ");
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		printf("\n[%d]\n", i+1);
		printf("1.이름 : ");
		scanf("%s", &s[i].name[i]);
		printf("2.국어 : ");
		scanf("%d", &s[i].korean[i]);
		if (s[i].korean[i] > 100) {
			printf("잘못 입력하셨습니다.");
			break;
		}
		printf("3.영어 : ");
		scanf("%d", &s[i].english[i]);
		if (s[i].english[i] > 100) {
			printf("잘못 입력하셨습니다.");
			break;
		}
		printf("4.수학 : ");
		scanf("%d", &s[i].math[i]);
		if (s[i].math[i] > 100) {
			printf("잘못 입력하셨습니다.");
			break;
		}
	}
	return 0;
}

int calculate_data(void) {
	//총점 계산
	for (int i = 0; i < num; i++){
		s[i].sum[i] = s[i].korean[i] + s[i].english[i] + s[i].math[i];
	}
	//평균 계산
	for (int i = 0; i < num; i++){
		s[i].average[i] = (double)s[i].sum[i] / 3;
	}
	//과목별 평균 계산
	for (int i = 0; i < num; i++){
		kor_sum += s[i].korean[i];
		eng_sum += s[i].english[i];
		math_sum += s[i].math[i];
	}
	kor_avg = (double)kor_sum / num;
	eng_avg = (double)eng_sum / num;
	math_avg = (double)math_sum / num;
	//학점 계산
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
	printf("\n--------------------------------------------------------------------------------\n   번호      이름      국어      영어      수학      총점      평균      학점");
	for (int i = 0; i < num; i++){
		cnt++;
		printf("\n--------------------------------------------------------------------------------\n    %d       %s      %d        %d        %d       %d      %g      %c",	
			cnt, &s[i].name[i], s[i].korean[i], s[i].english[i], s[i].math[i], s[i].sum[i], s[i].average[i], s[i].score[i]);
	}
	printf("\n--------------------------------------------------------------------------------\n");
	return 0;
}

int graph(void) {
	//국어 평균점수 그래프
	printf("1) 국어 평균 점수 : ");
	for (int i = 0; i < (int)(kor_avg / 10); i++) {
		printf("■");
	}
	printf("(%g)\n", kor_avg);
	//영어 평균점수 그래프
	printf("2) 영어 평균 점수 : ");
	for (int i = 0; i < (int)(eng_avg / 10); i++) {
		printf("■");
	}
	printf(" (%g)\n", eng_avg);
	//수학 평균점수 그래프
	printf("3) 수학 평균 점수 : ");
	for (int i = 0; i < (int)(math_avg / 10); i++) {
		printf("■");
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
