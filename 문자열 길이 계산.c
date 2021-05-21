#include <stdio.h>

int StringLength(char s[]);

int main(void) {
	int n;
	char string[] = "hi";
	n = StringLength(string);
	printf("%d",n);
	
}

int StringLength(char s[]) {
	int count = 0;
	for (int i = 0; s[i] != '\0'; i++) {
		count = count + 1;

	}
return count;
}

