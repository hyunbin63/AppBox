#include "AppBox.h"

void main()
{
	char choice;

	while (1)
	{
		system("cls");

		puts("Application List");
		puts("");
		puts("1. 가위바위보 게임 (made by. saehyeon0122)");
		puts("2. 계산기 (made by. saehyeon0122)");
		puts("3. E-Book (made by. oownusq)");
		puts("4. 베스킨라빈스31 (made by. hyunbin63)");
		puts("5. 시뮬레이션 (made by. donghoon)");
		puts("6. 온라인 결제 시스템 (made by. shape_kim)");
		puts("7. 타이머 (made by. donghoon)");
		puts("8. 초 변환기 (made by. donghoon)");
		puts("9. 캘린더 (made by. oownusq)");

		puts("무엇을 플레이 하시겠습니까?");
		FlushConsoleInputBuffer(GetStdHandle(STD_INPUT_HANDLE));
		choice = getch();

		switch (choice)
		{
		case '1':
			RSP();
			break;
		case '2':
			calculator();
			break;
		case '3':
			ebook();
			break;
		case '4':
			baskin();
			break;
		case '5':
			MYS();
			break;
		case '6':
			vending_mechine();
			break;
		case '7':
			timer();
			break;
		case '8':
			sec();
			break;
		case '9':
			calender();
			break;
		}
	}
}