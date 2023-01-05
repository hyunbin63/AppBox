#include "AppBox.h"
int one_to_one(year);
int month(int a, int start);

int last_day[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
const char* mon[7] = { "일","월","화","수","목","금","토" };
const char* deco[2] = { "============================================================\n","------------------------------------------------------------\n"
};

void calender() {
	int year, first;
	int i = 0;
	printf("년도:");
	scanf("%d", &year);
	first = one_to_one(year);

	if ((year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0)))
	{
		last_day[1] = 29;
	}//윤년

	printf("%d년\n", year);

	for (int i = 0; i < 12; i++) {
		first = month(i, first);
	}
	return 0;
}
int one_to_one(int year)
{
	return (year + (year / 4 - year / 100 + year / 400)) % 7;
}

int month(int a, int first)
{
	int i = 0;
	printf("%d 월\n", a + 1);
	printf(deco[0]);
	for (i = 0; i < 7; i++) {
		printf("%7s", mon[i]);
	}
	printf("\n");
	printf(deco[1]);
	for (int i = 0; i < first; i++) {
		printf("%7s", " ");
	}
	for (int i = 0; i < last_day[a]; i++)
	{
		printf("%7d", i + 1);
		first++;
		if (first == 7) { first = 0; printf("\n"); }
	}
	printf("\n");
	printf(deco[0]);
	return first;
}