#include <stdio.h>
#pragma warning(disable:4996)
int main() {
	char c;
	int a, b;

	printf("=====계산기 프로그램=====\n");
	printf("계산식을 입력해주세요 (ex : 4 + 4 )\n");
	scanf("%d %c %d", &a, &c, &b);

	if (c == '+') {
		printf("\n%d", a + b);
	}
	else if (c == '-') {
		printf("\n%d", a - b);
	}
	else if (c == '*') {
		printf("\n%d", a * b);
	}
	else if (c == '/') {
		printf("\n%d", a / b);
	}
	else {
		printf("잘못된 입력입니다");
	}
}