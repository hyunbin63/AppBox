#include "AppBox.h"

void baskin()
{
	srand(time(NULL));

	int total = 0;
	int computer;
	int user;

	system("cls");
	puts("����Ų ��� 31 ����\n");

	while (1) {
		puts("��ǻ�� ����");
		computer = rand() % 4;
		for (int i = 0; i < computer; i++) {
			total++;
			printf("���� ���ھ� : %d\n", total);
			Sleep(500);
			if (31 <= total) {
				system("cls");
				puts("��ǻ�� �¸�\n");
				puts("����� ����ȭ������ ���ư��ϴ�");
				Sleep(3000);
				return 0;
			}
		}
		puts("");

		puts("�÷��̾� ����");
		do {
			printf("���ڸ� �Է��ϼ��� (0, 1, 2, 3) : ");
			scanf("%d", &user);
		} while (user < 0 || 3 < user);
		for (int i = 0; i < user; i++) {
			total++;
			printf("���� ���ھ� : %d\n", total);
			Sleep(500);
			if (31 <= total) {
				system("cls");
				puts("�÷��̾� �¸�\n");
				puts("����� ����ȭ������ ���ư��ϴ�");
				Sleep(3000);
				return 0;
			}
		}
		puts("");
	}
}