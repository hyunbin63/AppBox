#include <stdio.h>
#include <Windows.h>
int main(void)
{
	int hour, min, sec, sec2;
	
	printf("���ƿ��� ������ �ð� ��ȯ��(��=>�ð�,��,��)\n");
	printf("�Է� : "); scanf("%d", &sec);
	system("cls");
	sec2 = sec;
	min = sec / 60;
	hour = min / 60;
	sec = sec % 60;
	min = min % 60;

	printf("%d�ʸ� �ð�, ��, �� ������\n", sec2);
	printf("[%d�ð� %d�� %d��]", hour, min,  sec);
	
}