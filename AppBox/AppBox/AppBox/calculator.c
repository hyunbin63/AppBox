#include "AppBox.h"

void calculator() {
	system("cls"); //made by hyunbin63

	char c;
	int a, b;

	printf("=====���� ���α׷�=====\n");
	printf("������ �Է����ּ��� (ex : 4 + 4 )\n");
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
		printf("�߸��� �Է��Դϴ�");
	}

	puts("\n����ȭ������ ���ư����� enter Ű�� ��������"); //made by hyunbin63
	FlushConsoleInputBuffer(GetStdHandle(STD_INPUT_HANDLE)); //made by hyunbin63
	getchar(); //made by hyunbin63
}