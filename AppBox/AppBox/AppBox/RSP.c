#include "AppBox.h"

void RSP() {
	system("cls"); //made by hyunbin63

	int computer, user;
	srand(time(NULL));

	computer = rand() % 3 + 1;

	printf("����(1) ����(2) ��(3) �������ּ��� : ");
	scanf("%d", &user);
	printf("���� ���� : %d\n", user);
	printf("��ǻ�� ���� : %d\n", computer);
	if (user == 1 && computer == 2)
		printf("��ǻ�� �¸�");
	else if (user == 1 && computer == 3)
		printf("����� �¸�");
	else if (user == 2 && computer == 1)
		printf("����� �¸�");
	else if (user == 2 && computer == 3)
		printf("��ǻ�� �¸�");
	else if (user == 3 && computer == 1)
		printf("��ǻ�� �¸�");
	else if (user == 3 && computer == 2)
		printf("����� �¸�");
	else
		printf("�����ϴ�");

	puts("\n����ȭ������ ���ư����� enter Ű�� ��������"); //made by hyunbin63
	FlushConsoleInputBuffer(GetStdHandle(STD_INPUT_HANDLE)); //made by hyunbin63
	getchar(); //made by hyunbin63
}