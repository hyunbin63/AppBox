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
		puts("4. ����� (made by. hyunbin63)");
		puts("5. �ùķ��̼� (made by. donghoon)");
		puts("6. �¶��� ���� �ý��� (made by. shape_kim)");
		puts("7. �ؽ�Ʈ (made by. oownusq)");
		puts("8. (made by. )");
		puts("9. (made by. )");

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
			sunwooda();
			break;
		case '6':
			vending_mechine();
			break;
		}
	}
}