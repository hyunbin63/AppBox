#include "AppBox.h"

void main()
{
	char choice;

	while (1)
	{
		system("cls");

		puts("Application List");
		puts("");
		puts("1. ���������� ���� (made by. saehyeon0122)");
		puts("2. ���� (made by. saehyeon0122)");
		puts("3. E-Book (made by. oownusq)");
		puts("4. ����Ų���31 (made by. hyunbin63)");
		puts("5. �ùķ��̼� (made by. donghoon)");
		puts("6. �¶��� ���� �ý��� (made by. shape_kim)");
		puts("7. Ÿ�̸� (made by. donghoon)");
		puts("8. �� ��ȯ�� (made by. donghoon)");
		puts("9. Ķ���� (made by. oownusq)");

		puts("������ �÷��� �Ͻðڽ��ϱ�?");
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