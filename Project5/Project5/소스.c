#include <stdio.h>
#include <Windows.h>
int main(void)
{
	int hour, min, sec, sec2;
	
	printf("동훈오의 룰루랄라 시간 변환기(초=>시간,분,초)\n");
	printf("입력 : "); scanf("%d", &sec);
	system("cls");
	sec2 = sec;
	min = sec / 60;
	hour = min / 60;
	sec = sec % 60;
	min = min % 60;

	printf("%d초를 시간, 분, 초 나누기\n", sec2);
	printf("[%d시간 %d분 %d초]", hour, min,  sec);
	
}