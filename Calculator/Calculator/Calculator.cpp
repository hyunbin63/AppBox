#include <stdio.h>
#pragma warning(disable:4996)
int main() {
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
}