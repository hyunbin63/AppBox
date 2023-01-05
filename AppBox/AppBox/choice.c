#include "AppBox.h"

char choice()
{
	char choice;

	printf("선택지를 선택해 주세요");
	FlushConsoleInputBuffer(GetStdHandle(STD_INPUT_HANDLE));
	choice = getch();
	system("cls");

	return choice;
}