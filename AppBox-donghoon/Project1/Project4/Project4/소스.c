#include <stdio.h>
#include <Windows.h>
#include <time.h>

int main(void)
{
	int End,start=0,hour, min, sec;
	int a = 1;
	int b = 0;
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
			return 0;
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
}