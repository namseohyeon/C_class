#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//20200832 남서현
void compare(int [], int);

int main(void) {
	int num;
	int list[5] = { 11,22,33,22,55 };
	printf("기준배열: ");

	for (int i = 0; i < 5; i++) {
		printf("%2d ", list[i]);
	}
	printf("\n\n찾고자 하는 값은?");
	scanf("%d", &num);

	compare(list, num);

	return 0;
}

void compare(int L[], int n) {
	for (int i = 0; i < 5; i++) {
		if (L[i] == n) {
			printf("%d는 배열 요소의 %d의 값입니다.", n, i);
			break;
		}
		else if (L[0] != n && L[1] != n && L[2] != n && L[3] != n && L[4] != n) {
			printf("%d는 배열에 없습니다", n);
			break;
		}
	}

}
