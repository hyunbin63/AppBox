#include "AppBox.h"

char choice()
{
	char choice;

	printf("�������� ������ �ּ���");
	FlushConsoleInputBuffer(GetStdHandle(STD_INPUT_HANDLE));
	choice = getch();
	system("cls");

	return choice;
}