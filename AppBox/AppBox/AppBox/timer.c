#include "AppBox.h"

void timer(void)
{
	int End, start = 0, hour, min, sec;
	int a = 1;
	int b = 0;

	system("cls"); //made by hyunbin63

	/*printf("=======================================\n");
	printf("(�ð�)             (��)             (��)\n");
	printf("=======================================\n");*/
	printf("�������� ������ Ÿ�̸�\n");
	printf("�ð� : "); scanf("%d", &hour);
	puts(" ");
	printf("�� : "); scanf("%d", &min);
	puts(" ");
	printf("�� : "); scanf("%d", &sec);

	/*scanf("%d %d %d", &hour, &min, &sec);*/
	system("cls");
	End = (3600 * hour) + (60 * min) + (sec);
	while (a)
	{
		if (End - start == 0)
		{
			printf("======================\n");
			printf("Ÿ�̸Ӱ� ����Ǿ����ϴ�.\n");
			printf("======================");
			

			break; //made by hyunbin63
		}

		if (End - start != 0)
		{
			printf("===============\n");
			printf("%d�� ���ҽ��ϴ�.\n", End - start);
			printf("===============");
		}

		Sleep(1000);
		system("cls");
		start = start + 1;

	}

	puts("\n����ȭ������ ���ư����� enter Ű�� ��������"); //made by hyunbin63
	FlushConsoleInputBuffer(GetStdHandle(STD_INPUT_HANDLE)); //made by hyunbin63
	getchar(); //made by hyunbin63
}