#include <stdio.h>
#pragma warning(disable:4996)
#define TRUE 1
#define Cider 6200
#define Cancoffee 5400
#define Blackcoffee 9200
#define Milkcoffee 7350

int MenuChoice;
int Money;
int Number = 1;
int All;
int residuum;

char Th;

int Mainmenu(){
	while (TRUE) {
		puts("====================== 음료 온라인 결제 시스템 ======================\n");
		puts(" ___________________________________________________________________\n");
		puts("|                                                                   |\n");
		puts("|       1. 사이다 210ml X 10캔   (6200원)                           |\n");
		puts("|                                                                   |\n");
		puts("|       2. 캔커피 275ml X 10캔   (5400원)                           |\n");
		puts("|                                                                   |\n");
		puts("|       3. 블랙커피 100T         (9200원)                           |\n");
		puts("|                                                                   |\n");
		puts("|       4. 카페라떼 12종         (7350원)                           |\n");
		puts("|                                                                   |\n");
		puts("|___________________________________________________________________|\n");
		puts("금액을 입력하여 잔고에 추가하십시오 (1000원 이상, 10000원 이하) :");
		scanf("%d", &Money);
		
		if (Money < 1000 || Money > 10000) {
			puts("추가하실 수 있는 금액이 아닙니다.\n");
			continue;
		}
		else{
			printf("\n\n\n\n\n\n%d원 추가 되었습니다.\n",Money);
			return 0;
		}
	}
}

int Menu() {
	while (TRUE) {
		puts("====================== 음료 온라인 결제 시스템 ======================\n");
		puts(" ___________________________________________________________________\n");
	    puts("|                                                                   |\n");
		puts("|       1. 사이다 210ml X 10캔   (6200원)                           |\n");
		puts("|                                                                   |\n");
		puts("|       2. 캔커피 275ml X 10캔   (5400원)                           |\n");
		puts("|                                                                   |\n");
		puts("|       3. 블랙커피 100T         (9200원)                           |\n");
		puts("|                                                                   |\n");
		puts("|       4. 카페라떼 12종         (7350원)                           |\n");
		puts("|                                                                   |\n");
		puts("|___________________________________________________________________|\n");

		printf("결제 할 품목의 번호 선택 : ");
		scanf("%d", &MenuChoice);

		if ((MenuChoice < 0 || MenuChoice > 4)) {
			printf("없는 품목의 번호입니다.\n");
			continue;
		}
		
		fflush(stdin);
		
		
		switch (MenuChoice){
			case 1:
				if ((Cider * Number) > Money) {
					printf("잔액이 부족합니다.");
					continue;
				}
				else {
					All = Cider * Number;
					residuum = Money - All;
					Money = residuum;
					printf("잔액 중 %d원을 사용하셨습니다.\n\n", All);
					printf("잔고에 남은 돈은 %d원입니다.\n\n", residuum);
					printf("배송은 오늘내로 출발합니다.\n\n");
				}
				break;
			
			case 2:
				if ((Cancoffee * Number) > Money) {
					printf("잔액이 부족합니다.");
					continue;
				}
				else {
					All = Cancoffee * Number;
					residuum = Money - All;
					Money = residuum;
					printf("잔액 중 %d원을 사용하셨습니다.\n\n", All);
					printf("잔고에 남은 돈은 %d원입니다.\n\n", residuum);
					printf("배송은 오늘내로 출발합니다.\n\n");
				}
				break;
			
			case 3:
				if ((Blackcoffee * Number) > Money) {
					printf("잔액이 부족합니다.");
					continue;
				}
				else {
					All = Blackcoffee * Number;
					residuum = Money - All;
					Money = residuum;
					printf("잔액 중 %d원을 사용하셨습니다.\n\n", All);
					printf("잔고에 남은 돈은 %d원입니다.\n\n", residuum);
					printf("배송은 오늘내로 출발합니다.\n\n");
				}
				break;
			
			case 4:
				if ((Milkcoffee * Number) > Money) {
					printf("잔액이 부족합니다.");
					continue;
				}
				else {
					All = Milkcoffee * Number;
					residuum = Money - All;
					Money = residuum;
					printf("잔액 중 %d원을 사용하셨습니다.\n\n", All);
					printf("잔고에 남은 돈은 %d원입니다.\n\n", residuum);
					printf("배송은 오늘내로 출발합니다.\n\n");
				}
				break;

	
			break;
		}
	
	Jong:
		fflush(stdin);
		printf("\n온라인 결제 시스템을 종료 하시겠습니까? (Y / N) : ");
		scanf("%c", &Th);

		if (Th == 'Y') {
			puts("결제 시스템을 종료합니다.\n");
			break;
		}
		else if (Th == 'N') {
			puts("결제 시스템을 계속 실행합니다.\n");
			continue;
		}
		else {
			printf("잘못 입력하셨습니다.\n");
			goto Jong;
		}
	}
		return 0;
}

int main() {
	Mainmenu();
	Menu();

	return 0;
}