#include "AppBox.h"

void RSP() {
	system("cls"); //made by hyunbin63

	int computer, user;
	srand(time(NULL));

	computer = rand() % 3 + 1;

	printf("가위(1) 바위(2) 보(3) 선택해주세요 : ");
	scanf("%d", &user);
	printf("유저 선택 : %d\n", user);
	printf("컴퓨터 선택 : %d\n", computer);
	if (user == 1 && computer == 2)
		printf("컴퓨터 승리");
	else if (user == 1 && computer == 3)
		printf("사용자 승리");
	else if (user == 2 && computer == 1)
		printf("사용자 승리");
	else if (user == 2 && computer == 3)
		printf("컴퓨터 승리");
	else if (user == 3 && computer == 1)
		printf("컴퓨터 승리");
	else if (user == 3 && computer == 2)
		printf("사용자 승리");
	else
		printf("비겼습니다");

	puts("\n메인화면으로 돌아가려면 enter 키를 누르세요"); //made by hyunbin63
	FlushConsoleInputBuffer(GetStdHandle(STD_INPUT_HANDLE)); //made by hyunbin63
	getchar(); //made by hyunbin63
}