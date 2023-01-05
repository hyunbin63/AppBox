#include "AppBox.h"

void baskin()
{
	srand(time(NULL));

	int total = 0;
	int computer;
	int user;

	system("cls");
	puts("베스킨 라빈스 31 게임\n");

	while (1) {
		puts("컴퓨터 차례");
		computer = rand() % 4;
		for (int i = 0; i < computer; i++) {
			total++;
			printf("현재 스코어 : %d\n", total);
			Sleep(500);
			if (31 <= total) {
				system("cls");
				puts("컴퓨터 승리\n");
				puts("잠시후 메인화면으로 돌아갑니다");
				Sleep(3000);
				return 0;
			}
		}
		puts("");

		puts("플레이어 차례");
		do {
			printf("숫자를 입력하세요 (0, 1, 2, 3) : ");
			scanf("%d", &user);
		} while (user < 0 || 3 < user);
		for (int i = 0; i < user; i++) {
			total++;
			printf("현재 스코어 : %d\n", total);
			Sleep(500);
			if (31 <= total) {
				system("cls");
				puts("플레이어 승리\n");
				puts("잠시후 메인화면으로 돌아갑니다");
				Sleep(3000);
				return 0;
			}
		}
		puts("");
	}
}