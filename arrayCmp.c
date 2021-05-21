#include <stdio.h>
#define size 5
//20200832 남서현
int ArrayCmp(int a1[], int a2[], int);

int main(void) {
	int count;
	int list1[size] = {1, 2, 3, 4, 5};
	int list2[size] = {2, 8, 9, 6, 3};
	count = ArrayCmp(list1, list2, size);
	printf("%d개가 같습니다", count);

	return 0;
}

int ArrayCmp(int a1[], int a2[], int n) {
	int count = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (a1[i] == a2[j]) {
				printf("a1[%d]와 a2[%d] 둘다 %d이다\n", i, j, a1[i]);
				count = count + 1;
			}
		}
		
	}
	return count;
}

