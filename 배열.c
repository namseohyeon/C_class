#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define people 3
#define class 6

void input(int a[][6]);
void sum(int b[][6]);
void output(int c[][6]);

int main(void){
	int array[people][class];
	//정수 입력
	input(array);
	//합계
	sum(array);
	//출력
	output(array);

	return 0;
}

void input(int a[][6]) {
	for (int i = 0; i < people-1; i++) {
		printf("%d번째 학생\n", i+1);
		for (int j = 0; j < class-1; j++) {
			printf("%d번째 점수를 입력하세요", j+1);
			scanf("%d", &a[i][j]);
		}
	}

}

void sum(int b[][6]) {
	//가로 점수 합
	int i, j;
	for (i = 0; i < people - 1; i++) {
		int sum = 0;
		for (j = 0; j < class - 1; j++) {
			sum = sum + b[i][j];
			b[i][5] = sum;
		}
	}
	//세로 점수 합
		b[2][0] = b[1][0]+ b[0][0];
		b[2][1] = b[0][1] + b[1][1];
		b[2][2] = b[0][2] + b[1][2];
		b[2][3] = b[0][3] + b[1][3];
		b[2][4] = b[0][4] + b[1][4];
	
	// 총합
	int sum = 0;
	int sum1 = 0;
	for (i = 0; i < 5; i++) {
		sum = sum + b[2][i];
	}
	b[2][5] = sum + b[0][5] + b[1][5];
	
	//b[2][5] = b[0][5] + b[1][5] + b[2][0] + b[2][1] + b[2][2] + b[2][3];

}

void output(int c[][6]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 6; j++) {
			printf("%3d ", c[i][j]);
		}
		printf("\n");
	}
}