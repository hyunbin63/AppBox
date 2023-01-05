#include <stdio.h>
#include <Windows.h>
#include <time.h>

int main(void)
{
	int End,start=0,hour, min, sec;
	int a = 1;
	int b = 0;
	/*printf("=======================================\n");
	printf("(시간)             (분)             (초)\n");
	printf("=======================================\n");*/
	printf("오동훈의 룰루랄라 타이머\n");
	printf("시간 : "); scanf("%d", &hour);
	puts(" ");
	printf("분 : "); scanf("%d", &min);
	puts(" ");
	printf("초 : "); scanf("%d", &sec);

	/*scanf("%d %d %d", &hour, &min, &sec);*/
	system("cls");
	End = (3600 * hour) + (60 * min) + (sec);
	while (a)
	{
		if (End - start == 0)
		{
			printf("======================\n");
			printf("타이머가 종료되었습니다.\n");
			printf("======================");
			return 0;
		}

		if (End - start != 0) 
		{
			printf("===============\n");
			printf("%d초 남았습니다.\n", End - start);
			printf("===============");
		}

		Sleep(1000);
		system("cls");
		start = start + 1;
		
	}
}