#include "AppBox.h"

void calculator() {
	system("cls"); //made by hyunbin63

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

	puts("\n메인화면으로 돌아가려면 enter 키를 누르세요"); //made by hyunbin63
	FlushConsoleInputBuffer(GetStdHandle(STD_INPUT_HANDLE)); //made by hyunbin63
	getchar(); //made by hyunbin63
}