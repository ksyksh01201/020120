#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//#include <stdlib.h>
//#include <time.h>
//int main()
//{
//	int input;
//	int total = 0;
//	int turn = 1;
//	printf("����Ų��� 31������ ����!\n");
//	
//	while (1) {
//		if (turn == 1)
//		{
//			printf("A: ");
//		}
//		else
//		{
//			printf("B: ");
//		}
//		scanf("%d", &input);
//
//		if (input <1 || input>3)
//		{
//			printf("1~3���ڸ� �Է����ּ���!\n");
//			continue;
//		}
//
//		total += input;
//		printf("=> %d\n", total);
//
//		if (turn == 1)
//		{
//			turn = 2;
//		}
//		else
//		{
//			turn = 1;
//		}
//		if (total >= 31)
//		{
//			if (turn == 1) {
//				printf("A�� 31�� ���� B�� �¸�!\n");
//			}
//			else
//			{
//				printf("B�� 31�� ���� A�� �¸�!\n");
//			}
//			break;
//		}
//		
//	}
//	return 0;
//
//}

//int main()
//{
//	int number;
//	int count = 0;
//	printf("���ڸ� �Է�: ");
//	scanf("%d", &number);
//	while (number != 0) {
//		number /= 10;
//		count++;
//	}
//	printf("�Է��� ������ ���� : %d\n", count);
//	return 0;
//}
//int main()
//{
//	int select;
//	do {
//		printf("\n����� ���ͺ��̽�\n");
//		printf("1. �α���\n");
//		printf("2. ȸ������\n");
//		printf("3. �ɼ�\n");
//		printf("4. ���� �����\n");
//		printf("�ٸ� ���� �Է��ϸ� ����˴ϴ�\n");
//		printf("select: ");
//		scanf("%d", &select);
//
//		switch (select)
//		{
//		case 1:
//			printf("�α����� ������\n");break;
//		case 2:
//			printf("ȸ�������� ������\n");break;
//		case 3:
//			printf("�ɼ��� ������\n");break;
//		case 4:
//			printf("���� ������� ������\n");break;
//
//
//		}
//	}
//	while (select >= 1 && select <= 4);
//	printf("���α׷��� �����մϴ�.\n");
//
//}

//int main()
//{
//	srand((unsigned int)time(NULL));
//	int command;
//	int day = 0;
//	int study = 0;
//	do
//	{
//		printf("\n%d��° ��!\n", ++day);
//		printf("������ ���ұ��?\n");
//		printf("1.�ڵ������Ѵ�.\n");
//		printf("�� ��. ������.\n >> ");
//		scanf("%d", &command);
//		if (command != 1) break;
//
//		int randInt = rand() % 5 + 1;
//		switch (randInt)
//		{
//		case 1:
//			printf("����� ���׿�.\n");
//		case 2:
//			printf("���������� ");break;
//		case 3:
//			printf("����� ������.\n");
//		case 4:
//			printf("ī�信�� ");break;
//		case 5:
//			printf("�п����� ");
//
//	 }
//		printf("�ڵ������մϴ�\n");
//		study++;
//	} while (1);
//	if (day <= 3)
//	{
//		printf("�״�� �Դϴ�...\n");
//	}
//	else
//	{
//		int level = study / 8;
//		switch (level)
//		{
//		case 0:
//			printf("�ڵ������� �Ǿ����ϴ�!\n");
//			break;
//		case 1:
//			printf("���α׷��Ӱ� �Ǿ����ϴ�!\n");
//			break;
//		case 2:
//			printf("����Ʈ �����ڰ� �Ǿ����ϴ�!\n");
//			break;
//		case 3:
//			printf("��ص� �����ڰ� �Ǿ����ϴ�!\n");
//			break;
//		default:
//			printf("Ǯ���� �����ڰ� �Ǿ����ϴ�.\n");
//			break;
//		}
//	}
//	return 0;
//}

int main()
{
	srand((unsigned int)time(NULL));
	int command;
	int day = 0;
	int study = 0;
	do
	{
		printf("\n%d��° ��!\n", ++day);
		printf("������ ���ұ��?\n");
		printf("1.�ڵ������Ѵ�.\n");
		printf("2.��� �Ѵ�.\n");
		printf("3.������ �Ѵ�.\n");
		printf("4.������ �Ѵ�.\n");
		printf("�� ��. ������.\n >> ");
		scanf("%d", &command);
		if (command <1 || command >4) break;
		switch (command)
		{
		case 1:
			printf("�ڵ� ���θ� �����ϼ̽��ϴ�.\n");
			
			study++;
			break;
		case 2:
			printf("��� �����ϼ̽��ϴ�. ���� �ǰ�����\n ");break;
		case 3:
			printf("������ �����ϼ̽��ϴ� ������ ǳ�����.\n");
		case 4:
			printf("������ �����ϼ̽��ϴ�. ��Ʈ������ ǰ\n ");break;
		default:
			break;

		int randInt = rand() % 5 + 1;
		switch (randInt)
		{
		case 1:
			printf("����� ���׿�.\n");break;
		case 2:
			printf("���������� ");break;
		case 3:
			printf("����� ������.\n");break;
		case 4:
			printf("ī�信�� ");break;
		case 5:
			printf("�п����� ");break;

		}
		if (command ==1) printf("�ڵ������մϴ�\n");
		
		
	} while (1);
	if (day <= 3)
	{
		printf("�״�� �Դϴ�...\n");
	}
	else
	{
		int level = study / 8;
		switch (level)
		{
		case 0:
			printf("�ڵ������� �Ǿ����ϴ�!\n");
			break;
		case 1:
			printf("���α׷��Ӱ� �Ǿ����ϴ�!\n");
			break;
		case 2:
			printf("����Ʈ �����ڰ� �Ǿ����ϴ�!\n");
			break;
		case 3:
			printf("� ������ �Ǿ����ϴ�!\n");
			break;
		case 4:
			printf("E������ ������ �Ǿ����ϴ�!\n");
			break;
		case 5:
			printf("�۰��� �Ǿ����ϴ�!\n");
			break;
		case 6:
			printf("��ص� �����ڰ� �Ǿ����ϴ�!\n");
			break;
		default:
			printf("Ǯ���� �����ڰ� �Ǿ����ϴ�.\n");
			break;
		}
	}
	return 0;
}

//int main()
//{
//	srand((unsigned int)time(NULL));
//	int command;
//	int day = 0;
//	int study = 0;
//	int rest = 0;
//	int hobby = 0;
//
//	do
//	{
//		printf("\n%d��° ��!\n", ++day);
//		printf("������ �� �ұ��?\n");
//		printf("1. �ڵ����� �Ѵ�.\n");
//		printf("2. ����.\n");
//		printf("3. ��̻�Ȱ �Ѵ�.\n");
//		printf("�׿�. ������.\n >> ");
//		scanf("%d", &command);
//
//		if (command != 1 && command != 2 && command != 3) break;
//		if (command ==1)
//		{
//			int randInt = rand() % 5 + 1;
//			switch (randInt)
//			{
//			case 1:
//				printf("����� ���׿�.\n");break;
//			case 2:
//				printf("����������.\n");break;
//			case 3:
//				printf("����� ������.\n");break;
//			case 4:
//				printf("ī�信��.\n");break;
//			case 5:
//				printf("�п�����.\n");break;
//
//			}
//			printf("�ڵ������մϴ�.\n");
//			study++;
//		}
//		else if (command ==2)
//		{
//			printf("�Ϸ� ���� �޽��� ���߽��ϴ�.\n");
//			rest++;
//		}
//		else if (command ==3)
//		{
//			printf("��̻�Ȱ�� �����ϴ�.\n");
//			hobby++;
//		}
//	} while (1);
//	if (day <=3)
//	{
//		printf("�״�� �Դϴ�..\n");
//	}
//	else if (study > rest && study > hobby)
//	{
//		int level = study / 8;
//		switch (level)
//		{
//		case 0:
//			printf("�ڵ������� �Ǿ����ϴ�!\n");break;
//		case 1:
//			printf("���α׷��Ӱ� �Ǿ����ϴ�!\n");break;
//		case 2:
//			printf("����Ʈ�ص� �����ڰ� �Ǿ����ϴ�!\n");break;
//		case 3:
//			printf("��ص� �����ڰ� �Ǿ����ϴ�!\n");break;
//		default:
//			printf("Ǯ���� �����ڰ� �Ǿ����ϴ�!\n");break;
//
//		}
//	
//	}
//	else if (rest > study && rest > hobby)
//	{
//		printf("�޽� �������� �Ǿ����ϴ�.\n");
//
//	}
//	else if (hobby > study && hobby > rest)
//	{
//		printf("��� �����Ͱ� �Ǿ����ϴ�\n");
//	}
//	else
//	{
//		printf("���� ���� ���� ��ҽ��ϴ�!\n");
//	}
//	return 0;
//}

//int main()
//{
//	int sheep;
//	for (sheep = 1; sheep <= 50; sheep++) {
//		if (sheep %10 == 0)
//		{
//			printf("%d����...���� ���Ҿ��\n", sheep);
//
//		}
//		else if (sheep == 45)
//		{
//			printf("%d����...�������ϴ�.\n", sheep);
//			break;
//		}
//		else
//		{
//			printf("%d����\n", sheep);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int num;
//	for  (num = 1; num <= 50; num++)
//	{
//		int tens = num / 10;
//		int ones = num % 10;
//
//		if (tens ==3 || tens ==6 || tens == 9 || ones == 3 || ones ==6 || ones == 9)
//		{
//			printf("%d: �ڼ�\n", num);
//		}
//
//	}
//	return 0;
//}
//int main()
//{
//	int select;
//	do
//	{
//		printf("\n����� ���ͺ��̽�\n");
//		printf("1. �α���\n");
//		printf("2. ȸ������\n");
//		printf("3. �ɼ�\n");
//		printf("4. ��������\n");
//		printf("�ٸ� ���� �Է��ϸ� ����\n");
//		printf("select: ");
//		scanf("%d", &select);
//		
//		switch (select)
//		{
//		case 1:
//			printf("�α����� ������\n");
//			break;
//		case 2:
//			printf("ȸ�������� ������\n");
//			break;
//		case 3:
//			printf("�ɼ��� ������\n");
//			break;
//		case 4:
//			printf("�������� ������\n");
//			break;
//		default:
//			printf("���α׷��� ����\n");
//			break;
//
//		}
//
//	} while (select>=1 && select<=4);
//	return 0;
//}


