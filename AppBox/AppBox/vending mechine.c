#include "AppBox.h"
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

int Mainmenu() {

	system("cls");//made by hyunbin63

	while (TRUE) {
		puts("=================== ���� �¶��� ���� �ý��� ==================\n");
		puts("���������������������������������������������������������������������������������������������������������������������������� ");
		puts("��                                                            �� ");
		puts("��       1. ���̴� 210ml X 10ĵ   (6200��)                    �� ");
		puts("��                                                            �� ");
		puts("��       2. ĵĿ�� 275ml X 10ĵ   (5400��)                    �� ");
		puts("��                                                            �� ");
		puts("��       3. ��Ŀ�� 100T         (9200��)                    �� ");
		puts("��                                                            �� ");
		puts("��       4. ī��� 12��         (7350��)                    �� ");
		puts("��                                                            �� ");
		puts("���������������������������������������������������������������������������������������������������������������������������� ");
		puts("�ݾ��� �Է��Ͽ� �ܰ� �߰��Ͻʽÿ� (10,000�� �̻�, 100,000�� ����) :");
		scanf("%d", &Money);

		if (Money < 10000 || Money > 100000) {
			puts("�߰��Ͻ� �� �ִ� �ݾ��� �ƴմϴ�.\n");
			continue;
		}
		else {
			printf("\n\n\n\n\n\n%d�� �߰� �Ǿ����ϴ�.\n", Money);
			return 0;
		}
	}
}

int Menu() {
	while (TRUE) {
		puts("=================== ���� �¶��� ���� �ý��� ==================\n");
		puts("���������������������������������������������������������������������������������������������������������������������������� ");
		puts("��                                                            �� ");
		puts("��       1. ���̴� 210ml X 10ĵ   (6200��)                    �� ");
		puts("��                                                            �� ");
		puts("��       2. ĵĿ�� 275ml X 10ĵ   (5400��)                    �� ");
		puts("��                                                            �� ");
		puts("��       3. ��Ŀ�� 100T         (9200��)                    �� ");
		puts("��                                                            �� ");
		puts("��       4. ī��� 12��         (7350��)                    �� ");
		puts("��                                                            �� ");
		puts("���������������������������������������������������������������������������������������������������������������������������� ");

		printf("���� �� ǰ���� ��ȣ ���� : ");
		scanf("%d", &MenuChoice);

		if ((MenuChoice < 0 || MenuChoice > 4)) {
			printf("���� ǰ���� ��ȣ�Դϴ�.\n");
			continue;
		}

		fflush(stdin);


		switch (MenuChoice) {
		case 1:
			if ((Cider * Number) > Money) {
				printf("�ܾ��� �����մϴ�.");
				continue;
			}
			else {
				All = Cider * Number;
				residuum = Money - All;
				Money = residuum;
				printf("�ܾ� �� %d���� ����ϼ̽��ϴ�.\n\n", All);
				printf("�ܰ� ���� ���� %d���Դϴ�.\n\n", residuum);
				printf("����� ���ó��� ����մϴ�.\n\n");
			}
			break;

		case 2:
			if ((Cancoffee * Number) > Money) {
				printf("�ܾ��� �����մϴ�.");
				continue;
			}
			else {
				All = Cancoffee * Number;
				residuum = Money - All;
				Money = residuum;
				printf("�ܾ� �� %d���� ����ϼ̽��ϴ�.\n\n", All);
				printf("�ܰ� ���� ���� %d���Դϴ�.\n\n", residuum);
				printf("����� ���ó��� ����մϴ�.\n\n");
			}
			break;

		case 3:
			if ((Blackcoffee * Number) > Money) {
				printf("�ܾ��� �����մϴ�.");
				continue;
			}
			else {
				All = Blackcoffee * Number;
				residuum = Money - All;
				Money = residuum;
				printf("�ܾ� �� %d���� ����ϼ̽��ϴ�.\n\n", All);
				printf("�ܰ� ���� ���� %d���Դϴ�.\n\n", residuum);
				printf("����� ���ó��� ����մϴ�.\n\n");
			}
			break;

		case 4:
			if ((Milkcoffee * Number) > Money) {
				printf("�ܾ��� �����մϴ�.");
				continue;
			}
			else {
				All = Milkcoffee * Number;
				residuum = Money - All;
				Money = residuum;
				printf("�ܾ� �� %d���� ����ϼ̽��ϴ�.\n\n", All);
				printf("�ܰ� ���� ���� %d���Դϴ�.\n\n", residuum);
				printf("����� ���ó��� ����մϴ�.\n\n");
			}
			break;


			break;
		}

	Jong:
		printf("\n�¶��� ���� �ý����� ���� �Ͻðڽ��ϱ�? (Y / N) : ");
		scanf(" %c", &Th);

		if (Th == 'Y') {
			puts("���� �ý����� �����մϴ�.\n");
			break;
		}
		else if (Th == 'N') {
			puts("���� �ý����� ��� �����մϴ�.\n");
			continue;
		}
		else {
			printf("�߸� �Է��ϼ̽��ϴ�.\n");
			goto Jong;
		}
	}
	return 0;
}

void vending_mechine() {
	Mainmenu();
	Menu();
}