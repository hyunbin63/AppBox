#include <stdio.h> 
#include<stdlib.h>
#include<time.h>



int main(void) {

	int computer, user;
	srand(time(NULL));

	computer = rand() % 3 + 1;

	printf("����(1) ����(2) ��(3) �������ּ��� : ");
	scanf_s("%d", &user);
	printf("���� ���� : %d\n", user);
	printf("��ǻ�� ���� : %d\n", computer);
	if (user == 1 && computer == 2)
		printf("��ǻ�� �¸�");
	else if (user == 1 && computer == 3)
		printf("����� �¸�");
	else if (user == 2 && computer == 1)
		printf("����� �¸�");
	else if (user == 2 && computer == 3)
		printf("��ǻ�� �¸�");
	else if (user == 3 && computer == 1)
		printf("��ǻ�� �¸�");
	else if (user == 3 && computer == 2)
		printf("����� �¸�");
	else
		printf("�����ϴ�");

}